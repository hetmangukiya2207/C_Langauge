#include<stdio.h>

main()

{
	int r,c,i,j;
	
	printf("Enter the number of row(for array a)\t : ");
	scanf("%d",&r);
	printf("Enter the number of column(for array a)\t : ");
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
	
	
	printf("Enter the number of row(for array b)\t : ");
	scanf("%d",&r);
	printf("Enter the number of column(for array b)\t : ");
	scanf("%d",&c);
	
	
	int b[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Value of Array b[%d][%d] : ", i,j);
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("\n-------------------------------------------\n");
	for(i=0; i<r; i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n-------------------------------------------\n");
	
	int d[r][c];
    	for (i=0;i<r;i++)
    	{
    		for (j=0;j<c;j++)
    		{
    		d[i][j] = a[i][j] + b[i][j];
    		printf("%d ", d[i][j]);
    		}
    		printf("\n");
    	}
	
}
