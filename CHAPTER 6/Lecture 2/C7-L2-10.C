#include <stdio.h>
#include<conio.h>
int main()
{
   int n, i=1;
   clrscr();
    printf("Enter a Number: ");
    scanf("%d",&n);

    do
    {
	printf("\n%d*%d=%d\n",n,i,n*i);
	i++;
    }while(i<=10);
    getch();
}


