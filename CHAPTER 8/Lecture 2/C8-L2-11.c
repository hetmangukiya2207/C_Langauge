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
	for(i=1;i<4;i++)
	{
  		for(j=1;j<4;j++)
		{
				printf("%d ",a[i][j]);
   		}
   	        printf("\n");

	}
		for(i=1;i<4;i++)
	{
  		for(j=1;j<4;j++)
		{
				sum = sum + a[i][j];		
		}
	}
	printf("sum of boundary element = %d\n",sum);
}
