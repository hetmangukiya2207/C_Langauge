#include<stdio.h>

main()
{
	int n,i,sum1=0,sum2=0;
	
	printf("Enter the  elements:");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	    
	    
	     
	for(i=0;i<n;i++)
	{
		printf("Enter any Number:");
		scanf("%d",&a[i]);
		sum1+=a[i];
	}
	 
	for(i=0;i<n;i++)
	{
		printf("Enter any Number:");
		scanf("%d",&b[i]);
		sum2+=b[i];
	}
	
	printf("sum=%d",sum1+sum2);
}
	    
	   
	  
