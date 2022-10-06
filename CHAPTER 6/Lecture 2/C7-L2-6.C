#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	do
	{          if(n%2==0)
		    {
		printf(" even no: %d\n ",n);
		    }
		    n--;
	}while(1<=n);
	getch();
}