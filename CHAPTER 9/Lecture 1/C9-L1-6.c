#include<stdio.h>
#define p printf
#define s scanf
main()
{
	char name[100];
	int i;
	p("Enter Your Name = ");
	s("%s",&name);
	for(i=0;i<strlen(name);i++)
{
	if(name[i]>=65 && name[i]<=90 && i!=0)
	  {    
	    {
	    	name[i] +=32;
	    }
	  }
	else if(name[i]>=97 && name[i]<=122)
	{
		if(i==0)
	     	{
	     		name[i] -=32;
			}
     }	
}
     p("Toggle %s",name);  
}
