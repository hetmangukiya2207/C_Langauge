#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,sum=0;
	clrscr();
	printf("enter a positive intiger:");
	scanf("%d",&n);
	i=1;
	do
	{
		sum+=i;
		    i++;
	}while(i<=n);
	printf("sum = %d",sum);
	getch();
}