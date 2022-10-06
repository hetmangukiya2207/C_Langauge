#include <stdio.h>
#include<conio.h>
main() 
{
  	int n, rev = 0, rem, ori;
  	clrscr();
  	
    printf("Enter Any Number : ");
    scanf("%d", &n);
    ori = n;

    while (n != 0) 
	{
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (ori == rev)
    {
        printf("%d is a palindrome.", ori);
	}
	else
    {
    	 printf("%d is not a palindrome.", ori);
	}
	getch();	   
}
