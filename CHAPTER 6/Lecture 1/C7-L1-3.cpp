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
		printf("%d",i);
		i++;
	}
	getch();
}
