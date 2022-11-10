#include<stdio.h>
void cube(int n)
{
	printf("cube value is : %d",n*n*n);
}
main()
{
     int n;
	 printf("enter the any number");
	 scanf ("%d",&n);
	 cube(n);	
}
