#include <stdio.h>
#include<conio.h>

main()
{
    char ch = 'a';
	clrscr();
	
    do
    {
        printf("%c  ", ch++);
    }while(ch<='z');
    
    getch();

}
