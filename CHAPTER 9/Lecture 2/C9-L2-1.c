#include<stdio.h>
#include<string.h>
#define p printf
main()
{
	char password[100];
	 p("Enter the password:");
	gets(password);
	int ch=0,dig=0,ss=0;
	int i;
   for(i=0; i<strlen(password); i++)
   {
   	if(password[i] >= 65 && password[i] <= 90 || password[i] >= 97 && password[i]<= 122 )
		{
		     ch++;	
		} 
		else if(password[i] >= 48 && password[i] <= 57)
		{
			dig++;
		}
		else
		{
			ss++;
		}
	}
	if(ch>0 && dig>0 && ss==1)
	{
		p("your pass is valide:");
	}
	else
	{
		p("Your pass is not valide \n pelase enter new password:");
		
		
	}
}
