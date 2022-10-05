#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();s
	i=2000;
	while(i <= 3000)
	{
		if(i%4==0)
		{
					printf("%d this year is leap\n",i);
		}
		i++;
	}
	getch();
}
