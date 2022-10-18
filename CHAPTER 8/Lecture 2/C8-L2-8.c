#include<stdio.h>

main()

{
	int r,c,i,j;
	int sum = 0,avg=1;
	
	printf("Enter the number of row\t\t : ");
	scanf("%d",&r);
	printf("Enter the number of column\t : ");
	scanf("%d",&c);
	
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Value of Array a[%d][%d] : ", i,j);
			scanf("%d", &a[i][j]);
			
		}
	}
	
	printf("\n-------------------------------------------\n");
	for(i=0; i<r; i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n-------------------------------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==r-1)
			{
			sum = sum + a[i][j];
   }
		}

	}
		printf("sum of anti-diagonal = %d\n",sum);
	printf("\n-------------------------------------------\n");
}
