#include<stdio.h>
#include<string.h>
main()
{
    char str[200];
    int i, len, temp=0;
    int flag = 0;
    printf("Enter a string:");
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i < len ;i++)
	{
        if(str[i] != str[len-i-1])
		{
            temp = 1;
        break;
        }
    }
    
    if (temp==0)
    {
        printf("String is a palindrome");
    }    
    else {
        printf("String is not a palindrome");
    }
} 
