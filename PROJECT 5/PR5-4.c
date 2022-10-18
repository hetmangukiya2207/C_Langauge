#include <stdio.h>
int main()
{
int a[100] = { 0 };
int i,b,c, x, pos, n ;
printf("enter value of array=");
scanf("%d",&n);
for (i = 0; i < n; i++)
	{

		a[i] = i + 1;

	}
	for (i = 0; i < n; i++)
	{ 
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter you number=");
	scanf("%d",&b);
	x = b;
	printf("\n");
	printf("enter pos=");
	scanf("%d",&c);
	pos = c;
	n++;
for (i = n-1; i >= pos; i--)
	a[i] = a[i - 1];
	a[pos - 1] = x;
for (i = 0; i < n; i++)
	printf("%d ", a[i]);
	printf("\n");
}
