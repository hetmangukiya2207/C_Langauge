#include<stdio.h>

main()

{
	int r,c;
	int i,j;
	
	printf("Enter the value of row : ");
	scanf("%d", &r);
	
	printf("Enter the value of collum : ");
	scanf("%d", &c);
	
	printf("\n\n--------------\n\n");
	
	int a[r][c];
	
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("Enter the elements of a[%d][%d] : ", i,j);
			scanf("%d ", &a[i][j]);
		}
	}
	
	printf("\n\n--------------\n\n");
	
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}		
}
