/* Printing all the ASCII characters with their values */

#include <stdio.h>
int main()
{
char c;
int i;
printf("The ASCII characters and values are:\n");

for(i=0;i<=255;i++)
{
  printf("value=%d , char: %c \n ",i,i);
}

return 0;
}
