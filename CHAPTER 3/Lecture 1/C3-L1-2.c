#include<stdio.h>

main()

{
	int a,b,c;
	
	printf("Enter the value of A : ");
	scanf("%d",&a);
	
	printf("Enter the value of B : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n------------------------\n");
	
	printf("A : %d\n",a);
	
	printf("B : %d\n",b);
}
