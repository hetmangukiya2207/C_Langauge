#include<stdio.h>
#include<conio.h>
main()
{   int a, b, c;

    clrscr();

    printf("enter the value of A :");
    scanf("%d",&a);

    printf("enter the value of B :");
    scanf("%d",&b);

    printf("enter the value of C :");
    scanf("%d",&c);

    if(a==b && b==c && c==a)  
    {
	printf("all value are same");
    }
    else
    {
    if(a<b)
    {
    if(a<c)
    {
       printf("a is minimum");
    }
    else
    {
       printf("c is minimum");
    }
    }
    else
    {
    if(b<c)
    {
	printf("b is minimum");
    }
    else
    {
	printf("c is minimum");
    }
    }
    }
    getch();
}
