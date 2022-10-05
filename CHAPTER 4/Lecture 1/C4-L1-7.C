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

 printf("(x+y+z)^2 = %d",(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x)));
 getch();
}