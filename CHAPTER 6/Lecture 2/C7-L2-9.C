#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,f;
	clrscr();
	f=i=1;
	printf("enter a number:");
	scanf("%d",&n);
	do
	{
		f*=i;
		i++;
	}while(i<=n);
	printf("factorial is = %d",f);
	getch();
}