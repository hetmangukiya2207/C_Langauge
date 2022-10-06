#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();
	printf("enter no :");
	scanf("%d",&n);
	printf("factor of n :",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		 printf("%d",i);
		}
	}
	getch();
}
