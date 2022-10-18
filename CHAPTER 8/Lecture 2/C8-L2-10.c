#include<stdio.h>

main()
{
	int i,j;
	int sum = 0;
		
	int a[5][5];
	
	for(i=0; i<5; i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter Value of Array a[%d][%d] : ", i,j);
			scanf("%d", &a[i][j]);
			
		}
	}
	
	printf("\n-------------------------------------------\n");
	for(i=0; i<5; i++)
	{
		for(j=0;j<5;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n-------------------------------------------\n");
	printf("boundary elements :\n");
	for(i=0;i<5;i++)
	{
  		for(j=0;j<5;j++)
		{
			if(i==0||i==4||j==0||j==4)
			{
				printf("%d ",a[i][j]);
   			}
   			else
   			{
   				printf("  ");	
			}
		}
		printf("\n");

	}
		for(i=0;i<5;i++)
	{
  		for(j=0;j<5;j++)
		{
			if(i==0||i==4||j==0||j==4)
			{
				sum = sum + a[i][j];
   			}		
		}
	}
	printf("sum of boundary element = %d\n",sum);
}
