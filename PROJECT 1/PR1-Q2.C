#include<stdio.h>
#include<conio.h>

main()
{
 int a,b;
 clrscr();

 printf("Enter Value Of a = ");
 scanf("%d",&a);
 printf("Enter Value Of b = ");
 scanf("%d",&b);

 a = a + b;
 b = a - b;
 a = a - b;

 getch();
}

