#include<stdio.h>
#include<conio.h>

main()
{
 int x,y;
 clrscr();
 printf("enter value of x:");
 scanf("%d",&x);
 printf("enter value of y:");
 scanf("%d",&y);

 printf("(x+y)^3 = %d",(x*x*x) + (3*x*y)*(x+y) + (y*y*y));
 getch();
}