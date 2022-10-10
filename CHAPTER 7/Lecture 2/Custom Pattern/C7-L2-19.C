#include<stdio.h>

main()
{
 int i,j;
 clrscr();

 for(i=1; i<=7; i++)
 {
      if(i==3)
      {
	printf("* *    *\n");
      }
      else if(i==4)
      {
	printf("*  *   *\n");
      }
      else if(i==5)
      {
	printf("*    * *\n");
      }
      else
      {
	printf("*      *\n");
      }
 }
}
