#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,c,d,e;
	clrscr();
	
	printf("Enter the value of A : ");
	scanf("%d", &a);
	
	printf("Enter the value of B : ");
	scanf("%d", &b);
	
	printf("Enter the value of C : ");
	scanf("%d", &c);
	
	printf("Enter the value of D : ");
	scanf("%d", &d);

	printf("Enter the value of E : ");
	scanf("%d", &e);	
	(a>b)
		?   (a>c)
				?   (a>d)
						? 	(a>e)
								? printf("A is Maximum...")
								: printf("E is Maximum...")
						:	(d>e)
								? printf("D is Maximum...")
								: printf("E is Maximum...")
				:	(c>d)
						? 	(c>e)
								? printf("C is Maximum...")
								: printf("E is Maximum...")
						: 	(d>e)
								? printf("D is Maximum...")
								: printf("E is Maximum...")
		:   (b>c)
				?   (b>d)
						? 	(b>e)
								? printf("B is Maximum...")
								: printf("E is Maximum...")
						:	(d>e)
								? printf("D is Maximum...")
								: printf("E is Maximum...")
				:	(c>d)
						? 	(c>e)
								? printf("C is Maximum...")
								: printf("E is Maximum...")
						: 	(d>e)
								? printf("D is Maximum...")
								: printf("E is Maximum...");
	getch();
		
}
