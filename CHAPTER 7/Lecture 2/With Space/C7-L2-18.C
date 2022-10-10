#include<stdio.h>

main()
{
 int i,k,j;


 for(i=1; i<=5; i++)
 {
  for(k=5; k>i; k--)
  {
   printf(" ");
  }
  for(j=1; j<=i; j++)
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
