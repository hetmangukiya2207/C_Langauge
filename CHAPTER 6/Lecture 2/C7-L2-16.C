#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();
	printf("enter no:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		if(i%2==0)
		{
			printf(" even no. is :%d\n",i);
		}

	}
	getch();
}