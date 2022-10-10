#include<stdio.h>

main()
{
 int i,j,k;
 

 for(i=1; i<=4; i++)
 {
  printf("*");
     for(j=i; j<4; j++)
     {
       printf(" ");
     }
     for(k=1; k<=1; k++)
     {
       printf("*");
     }
     printf("\n");
 }

  for(i=1; i<=4; i++)
 {
  printf("*");
     for(j=1; j<i; j++)
     {
       printf(" ");
     }
     for(k=1; k<=1; k++)
     {
       printf("*");
     }
     printf("\n");
 }
}
