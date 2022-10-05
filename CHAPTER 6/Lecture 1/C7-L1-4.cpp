#include<stdio.h>
#include<conio.h>
main()
{
	int i,N;
	clrscr();
	printf("N = ");
	scanf("%d",&N);
	i=1;
	while(N >= i)
	{
		printf("\n\n%d\n",N);
		N--;
	}
	getch();
}
