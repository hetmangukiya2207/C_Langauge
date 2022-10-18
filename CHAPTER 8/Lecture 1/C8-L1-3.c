#include<stdio.h>

main()

{
	int i,n,sum=0;
	
	printf("Enter length of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter Value of Array a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("\n-------------------------------------------\n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d \n",i ,a[i]);
		sum = sum + a[i];
	}
	printf("\n-------------------------------------------\n");
	
	printf("Sum : %d", sum);
	
}
