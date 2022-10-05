#include<stdio.h>
#include<conio.h>

main ()
{
	int a,b;
	clrscr();
	
	printf("Enter the value of A :");
	scanf("%d", &a);

	printf("Enter the value of B :");
	scanf("%d", &b);	
	
	printf("\n------------------\n");
	
	(a>b)
		 ? printf("A is Maximum Value...")
		 : printf("B is Maximum Value...");
	
	getch();
}
