#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,c,d;
	clrscr();
	
	printf("Enter the value of A : ");
	scanf("%d", &a);
	
	printf("Enter the value of B : ");
	scanf("%d", &b);
	
	printf("Enter the value of C : ");
	scanf("%d", &c);
	
	printf("Enter the value of D : ");
	scanf("%d", &d);
	
	(a>b)
		?   (a>c)
				?   (a>d)
						? printf("A is Maximum...")
						: printf("D is Maximum...")
				:	(c>d)
						? printf("C is Maximum...")
						: printf("D is Maximum...")
		: 	(b>c)
				?	(b>d)
						? printf("B is Maximum...")
						: printf("D is Maximum...")
				:	(c>d)
						? printf("C is Maximum...")
						: printf("D is Maximum...");
	
	getch();
}













