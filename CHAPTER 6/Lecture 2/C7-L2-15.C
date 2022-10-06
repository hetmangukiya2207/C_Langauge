#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf(" odd no. is :%d\n",i);
		}

	}
	getch();
}