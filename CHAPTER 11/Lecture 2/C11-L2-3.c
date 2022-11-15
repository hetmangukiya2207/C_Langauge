#include<stdio.h>
#include<string.h>

void title(char *a){
	int i;
	
	for(i=0; i<1; i++)
	{
		if(a[i]>=97 && a[i]<=122)  
		{
			a[i] -= 32;
		}
	}
	for(i=1; i<strlen(a); i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i] += 32;	
		}	
	}
}

void main(){
	
	char str[100];
	
	printf("Enter String : ");
	gets(str);
	
	title(&str);
	
	printf("Title case : %s",str);
	
}
