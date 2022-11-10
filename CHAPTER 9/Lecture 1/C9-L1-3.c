#include<stdio.h>
main()
{
	char name[100];
	int i;
	
	printf("Enter Your Name = ");
	scanf("%s",&name);
	
	for(i=0;i<strlen(name);i++)
	{
		name[i]-32;
	}
	
     printf("%s",name);  
}
