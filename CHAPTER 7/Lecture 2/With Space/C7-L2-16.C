#include<stdio.h>

main()
{
 char i,k,j;


 for(i='A'; i<='E'; i++)
 {
  for(k='A'; k<i; k++)
  {
   printf(" ");
  }
  for(j=i; j<='E'; j++)
  {
   printf("%c",j);
  }
  printf("\n");
 }
}
