#include<stdio.h>

int FindLength(char str[]) 
{
   int len = 0;
   while (str[len] != '\0')
    {
    	  len++;
	}
   return (len);
}

int main() 
{
   char str[100];
   int length;

   printf("\nEnter the String : ");
   gets(str);

   length = FindLength(str);

   printf("\nLength of the String is : %d", length);
   return(length);
}


