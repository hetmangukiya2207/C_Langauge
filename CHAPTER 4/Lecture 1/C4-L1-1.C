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

 printf("(x+y)^2 = %d",(x*x) + (2*x*y) + (y*y));
 getch();
}