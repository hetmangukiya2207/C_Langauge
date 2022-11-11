#include<stdio.h>

void main(){

	int a, square = 0;
	int *p1;
	printf("enter the value of a : ");
	scanf("%d",&a);
	p1 = &a;
	square = (*p1)*(*p1);
	printf("value square is %d",square);
}
