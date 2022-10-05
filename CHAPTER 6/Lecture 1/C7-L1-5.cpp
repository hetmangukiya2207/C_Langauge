#include<stdio.h>
#include<conio.h>
main()
{
	int i,N;
	clrscr();
	printf("N = ");
	scanf("%d",&N);
	i=1;
	while(i <= N)
	{
		if(i%2==1)
		{
			printf("%d number is odd\n",i);
		}
		else
		{
			printf("%d number is even\n",i);
		}
		i++;
	}
	getch();
}
