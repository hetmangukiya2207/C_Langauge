#include<stdio.h>

main()
{
	int i,j,n1,n2,n3;
	
	printf("how many elements Of Array A : ");
	scanf("%d",&n1);
	
	int a[n1];
	
	for(i=0; i<n1; i++)
    {
    	printf("a[%d] = ",i);
    	scanf("%d", &a[i]);
	}
	
	printf("\n------------------------------------\n");
	
	for(i=0; i<n1; i++)
	{
		printf("A[%d] : %d\n",i,a[i]);
    }
    
    printf("\n-------------------------------------\n");
    
    printf("how many elements Of Array B : ");
	scanf("%d",&n2);
	
	int b[n2];
	
	for(i=0; i<n2; i++)
    {
    	printf("b[%d] = ",i);
    	scanf("%d", &b[i]);
	}
	
	printf("\n------------------------------------\n");
	
	for(i=0; i<n2; i++)
	{
		printf("B[%d] : %d\n",i,b[i]);
    }
    
    printf("\n------------------------------------\n");
    
    int c[n3];
    
    printf("array C : ");
    
    for(i=0; i<n1; i++)
    {
    	c[i]=a[i];
	}
	
	for(i=0, j=n1; i<n1, j<n1+n2; i++, j++)
	{
	    c[j]=b[i];
	}
	
	for(i=0; i<n1+n2; i++)
	{ 
	    printf("%d ",c[i]);
    }
}
