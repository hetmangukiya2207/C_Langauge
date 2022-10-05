#include<stdio.h>
#include<conio.h>

main()
{
 int n,HRA,DA,TA;
 clrscr();

 printf("Enter Any Salary = ");
 scanf("%d",&n);

 HRA = n*10/100;
 DA = n*5/100;
 TA = n*8/100;

 printf("Ans = %d",n+HRA+DA+TA);
 getch();
}