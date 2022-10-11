#include<stdio.h>

main()
{
	int i,j,n=4;
	int a = n;
	int b = n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n*2;j++)
		{
			if(j==a||j==b)
			{
				printf("*");
			}
			else
	     	{
			printf(" ");
			}
			
		}
	a--;
	b++;
	printf("\n");	
	}

}
