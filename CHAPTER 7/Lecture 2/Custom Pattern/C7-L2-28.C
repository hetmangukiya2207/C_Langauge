#include<stdio.h>

main()
{
 int i,j;

 for(i=1; i<=7; i++)
 {
     if(i==5)
     printf("*   *   *\n");
     else if(i==6)
     printf("* *   * *\n");
     else
     printf("*       *\n");
 }
}
