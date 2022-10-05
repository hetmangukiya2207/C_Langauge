#include<stdio.h>

main()
{
	int a,b,ans;
		
	printf("Enter value of A = ");
	scanf("%d",&a);
	
		printf("Enter value of B = ");
	scanf("%d",&b);

	ans= (a*a) + (2*a*b) + (b*b);

	printf("\n---------------------------\n");
	
	printf("Answer :- %d",ans);
}
