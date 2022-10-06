#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		printf("%d ",n--);
	}while(n>=1);
	getch();
}