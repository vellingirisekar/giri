#include <stdio.h>
#include <string.h>
void main(void)
{
char s[1000], r[1000];
   int i, j, count = 0;
 
   printf("Input string\n");
   scanf("%s",&s);

   while (s[count] != '\0')
      count++;
 
   j = count - 1;
 
   for (i = 0; i < count; i++) {
      r[i] = s[j];
      j--;
   }
 
   r[i] = '\0';
 
   printf("%s\n", r);
	return o;
  }
