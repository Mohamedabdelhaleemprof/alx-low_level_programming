nclude <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
char *x;
int i = 0, f =0, j=0, n, d;
 
if (s1 == NULL || s2 == NULL )
return NULL;

for(i = 0; s1[i] != '\0'; i++);
for(f = 0; s2[f] != '\0'; f++);
       
x = (char *)malloc(((i + f + 1) * sizeof (char)));
			    
if (x != NULL){
n = i+f;
d = f-i;
for(j = 0; j < n; j++)
{
 if(j < i)
   {
     x[j] = s1[j];
   }
  else if (j < n)
   {
    x[j] = s2[j-f+d];
   }
}
}
x[n] = '\0';
return x;
}


