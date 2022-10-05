#include <stdio.h>
#include<conio.h>

main()
{
    char choice;
	clrscr();

    printf("Enter any character: ");
    scanf("%c", &choice);

    if((choice >= 'a' && choice <= 'z') || (choice >= 'A' && choice <= 'Z'))
    {
        printf("'%c' is alphabet.", choice);
    }
    else if(choice >= '0' && choice <= '9')
    {
        printf("'%c' is digit.", choice);
    }
    else 
    {
        printf("'%c' is special character.", choice);
    }
    getch();
}
