#include<stdio.h>

void main()
{
	int i,j;
	int *a,*b,c;
	
	printf("Enter the value of a & b = ");
	scanf("%d%d",&i,&j);
	printf("The value of a & b before swapping \na = %d\nb = %d\n",i,j);
	
	a=&i;
	b=&j;
	
	c=*b;
	*b=*a;
	*a=c;
	
	printf("The value of a & b after swapping \na = %d\nb = %d\n",i,j);
}
