#include <stdio.h>
#include <string.h>
 
int toggle(char *s)
{
	static int i=0;
	if(s[i])
    {
    	if(s[i]>=65 && s[i]<=90)
         s[i]+=32;
        else if(s[i]>=97 && s[i]<=122)
         s[i]-=32;
         
        i++;
         toggle(s);
    }  
}
int main()
{
    char s[1000];  
  
    printf("Enter  the string: ");
    gets(s);
    
 
    toggle(s);
     
    printf("string in togglecase ='%s'\n",s);
    
 
 }
