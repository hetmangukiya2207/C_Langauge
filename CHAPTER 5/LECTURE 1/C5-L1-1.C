#include<stdio.h>
#include<conio.h>
main()
{       int a,b;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
		if(a<b)
		{
		printf("min. no a:%d",a);
		}
		else
		{
		printf("min. no b:%d",b);
		}
	getch();
}