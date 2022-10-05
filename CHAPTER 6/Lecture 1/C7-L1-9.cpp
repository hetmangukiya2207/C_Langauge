#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,f;
	 clrscr();
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
    return 0;
}
