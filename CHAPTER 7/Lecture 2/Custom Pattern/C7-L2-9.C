#include<stdio.h>

main()
{
 int i,j,k;

 for(i=1; i<=7; i++)
 {
     if(i==1 || i==4 || i==7)
     {
	 printf("* * *\n");
     }



     if(i==2 || i==6)
     {
	 printf("*     *\n");
     }



     if(i==3 || i==5)
     {
	 printf("*     *\n");
     }
 }
}
