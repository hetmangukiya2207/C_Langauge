#include<stdio.h>

main()
{
 char i,j,k;

 for(i='E'; i>='A'; i--)
 {
  for(k='E'; k>i; k--)
  {
   printf(" ");
  }
  for(j='A'; j<=i; j++)
  {
   if(j%2==1)
   {
    printf("-");
   }
   else
   {
    printf("|");
   }
  }
  printf("\n");
 }
}
