#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
		
	printf("Enter the value of A : ");
	scanf("%d", &a);
	
	printf("Enter the value of B : ");
	scanf("%d", &b);
	
	printf("Enter the value of C : ");
	scanf("%d", &c);
	
	printf("\n-------------------\n");
	
	(a>b)
			? (a>c)
						? printf("A is Big...")
						: printf("C is Big...")
			: (b>c) 
						? printf("B is Big...")
						: printf("C is Big...");
						
	getch();
}
