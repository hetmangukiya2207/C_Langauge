#include<stdio.h>
#include<conio.h>

main()
{
 int x,y,z;
 clrscr();
 printf("enter value of x:");
 scanf("%d",&x);
 printf("enter value of y:");
 scanf("%d",&y);
 printf("enter value of z:");
 scanf("%d",&z);

 printf("(x+y+z)^3 = %d",(x*x*x) + (y*y*y) +(z*z*z)+(3*(x+y)*(y+z)*(z+x)));
 getch();
}