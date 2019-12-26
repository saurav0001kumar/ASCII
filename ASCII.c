// To print ASCII values from 0 to 255
#include <stdio.h>
void main(void)
{
  int i;
  printf("-> ASCII values from 0 to 255. <-\n");
  for(i=0;i<=255;i++)
  {
      printf("\n%d is equals to %c \t",i,i);
  }
  getchar();
}
