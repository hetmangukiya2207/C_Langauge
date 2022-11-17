#include<stdio.h>

struct distans
	{
		int feet;
		int inch;
	};

void main()
{
	struct distans d1, d2, res;
	
	printf("Enter 1st Distance : \n");
	printf("Enter Feet : ");
	scanf("%d",&d1.feet);
	printf("Enter Inch : ");
	scanf("%d",&d1.inch);
	
	printf("\n-----------------------------\n");
	
	printf("Enter 2st Distance : \n");
	printf("Enter Feet : ");
	scanf("%d",&d2.feet);
	printf("Enter Inch : ");
	scanf("%d",&d2.inch);
	
	res.feet = d1.feet + d2.feet ;
	res.inch = d1.inch + d2.inch ;
	
	while(res.inch > 12)
	{
		res.inch = res.inch - 12;
		res.feet++;
	}
	
	printf("Sum of distance = %d Feet \n%d Inch : ",res.feet, res.inch);
}
