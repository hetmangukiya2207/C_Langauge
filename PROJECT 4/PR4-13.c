#include<stdio.h>

main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
	for(s=1;s<=i-1;s++)
	{
		printf(" ");
	}
	for(j=i;j<=5;j++)
	{
		printf("%d",j);
	}
	printf("\n");
	}	
}
