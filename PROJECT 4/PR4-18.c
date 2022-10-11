#include<stdio.h>

main()
{
 int a,b,c,d,i;


 for(i=1; i<=5; i++)
 {
  for(a=1; a<=i; a++)
  {
   printf("%d",a);
  }
  for(b=5; b>i; b--)
  {
   printf(" ");
  }
  for(c=5; c>i; c--)
  {
   printf(" ");
  }
  for(d=i; d>=1; d--)
  {
   printf("%d",d);
  }
  printf("\n");
 }

}
