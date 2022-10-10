#include<stdio.h>

main()
{
 int i,j;

 for(i=1; i<=7; i++)
 {
  if(i==1 || i==3)
  {
   printf("* * * *");
  }
  else
  {
   printf("*     *");
  }
  printf("\n");
 }

}
