#include<stdio.h>
#include<conio.h>

main()
{

    int x,fact=1,n;
    clrscr();

    printf("Enter a number to find factorial : ");

    scanf("%d",&n); 

    for(x=1; x<=n; x++)
    {
    	fact = fact * x;
	}
	
    printf("Factorial of %d is: %d",n,fact);
    getch();
}
