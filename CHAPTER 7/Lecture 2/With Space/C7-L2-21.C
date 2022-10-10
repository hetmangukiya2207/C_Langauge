#include<stdio.h>

main()
{
 int i,k,j;

 for(i=1; i<=5; i++)
 {
  for(k=1; k<i; k++)
  {
   printf(" ");
  }
  for(j=i; j<=5; j++)
  {
   if(i%2==1)
   {
    printf("1");
   }
   else
   {
    printf("0");
   }
  }
  printf("\n");
 }
}
