#include<stdio.h>


main()
{
 int i,j;

 for(i=1; i<=7; i++)
 {
    if(i==1)
    {
      printf("* * * * *\n");
    }
    else if(i==6)
    {
      printf(" *  *\n");
    }
    else if(i==7)
    {
      printf("  * *\n");
    }
    else
    {
      printf("    *\n");
    }
 }
}
