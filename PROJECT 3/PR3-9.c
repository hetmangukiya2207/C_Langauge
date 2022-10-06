#include <stdio.h>  
#include<conio.h>
  
main ()  
{  
    
    int n, temp, rev = 0, digit, sum_of_digits = 0;  
    clrscr();
      
    printf (" Enter a Number : ");  
    scanf (" %d", &n); 
      
    temp = n; 
    while ( temp > 0)  
    {  
        
        sum_of_digits = sum_of_digits + temp % 10; 
        temp = temp / 10;  
    }  
      
    printf (" \n The sum of the digits = %d", temp);  
      
 
    while ( temp > 0)  
    {  
        rev = rev * 10 + temp % 10;  
        temp = temp / 10;  
    }  
      
    printf (" \n The reverse of the digits = %d", rev);  
      
      
    printf (" \n The product of %d * %d = %d", sum_of_digits, rev, rev * sum_of_digits);  
 
    if ( rev * sum_of_digits == n)  
    {  
        printf (" \n %d is a Magic Number. ", n);  
    }  
    else  
    {  
        printf (" \n %d is not a Magic Number. ", n);  
    }  
    
    getch();
      
}
