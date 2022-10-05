#include<stdio.h>
#include<conio.h>
main()
{
	int i,N,b,c;
	clrscr();
	printf("N = ");
    scanf("%d",&N);
	i=1;
	b=2;
	c=i+b;
	while(i <= N)
	{
		printf("%d + %d = %d",i,b,c);
		i++;
	}
	getch();
}
