#include<stdio.h>

main()
{
 int i,j,k;

 for(i=1; i<=5; i++)
 {
  for(j=1; j<=i; j++)
  {
   printf("%d",j);
  }
  printf("\n");
 }
 for(i=4; i>=1; i--)
 {
  for(k=1; k<=i; k++)
  {
   printf("%d",k);
  }
  printf("\n");
 }
}
