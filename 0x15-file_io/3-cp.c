#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int exit_code, char* error_message, char* filename, int fd) {
  dprintf(STDERR_FILENO, error_message, filename);
  if (fd != -1) {
    close(fd);
  }
  exit(exit_code);
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    print_error_and_exit(97, "Usage: cp file_from file_to\n", "", -1);
  }

  int file_from_fd = open(argv[1], O_RDONLY);
  if (file_from_fd == -1) {
    print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1], -1);
  }

  int file_to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
  if (file_to_fd == -1) {
    print_error_and_exit(99, "Error: Can't write to %s\n", argv[2], file_from_fd);
  }

  char buffer[BUFFER_SIZE];
  ssize_t read_count, write_count;

  while ((read_count = read(file_from_fd, buffer, BUFFER_SIZE)) > 0) {
    write_count = write(file_to_fd, buffer, read_count);
    if (write_count != read_count) {
      print_error_and_exit(99, "Error: Can't write to %s\n", argv[2], file_from_fd);
    }
  }

  if (read_count == -1) {
    print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1], file_to_fd);
  }

  if (close(file_from_fd) == -1) {
    print_error_and_exit(100, "Error: Can't close fd %d\n", "", file_to_fd);
  }

  if (close(file_to_fd) == -1) {
    print_error_and_exit(100, "Error: Can't close fd %d\n", "", file_from_fd);
  }

  return 0;
