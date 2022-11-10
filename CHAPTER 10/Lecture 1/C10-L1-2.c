#include<stdio.h>
void divison(int n)
{

	if(n%3 == 0 && n%5 == 0)
	{
		printf("your number is divison by 3&5 ");
	}
	else
	{
		printf("enter the is not divison by 3&5");
	}
}

void main()
{
	int n;
	printf("Enter Any Number : ");
    scanf("%d",&n);
	divison(n);
}
