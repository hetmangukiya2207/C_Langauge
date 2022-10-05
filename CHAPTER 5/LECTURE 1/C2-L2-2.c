#include<stdio.h>
#include<conio.h>
main()
{       int a;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
		if(a>0)
		{
		printf("a is positive");
		}
		else if(a==0)
		{
		printf("a is neutral");
		}
		else
		{
		printf("a is nagative");
		}
	getch();
}