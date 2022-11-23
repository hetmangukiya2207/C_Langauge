#include<stdio.h>
#include<string.h>

void main()
{
	FILE *v,*c;
	
	v = fopen("File 1.txt","w");
	c = fopen("File 2.txt","w");
	
	char a[50],i;
	
	printf("Enter any string : ");
	scanf("%[^\n]",&a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U'|| a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u')
		{
			fprintf(v,"\n%c",a[i]);
		}
		else
		{
			fprintf(c,"\n%c",a[i]);
		}
	}
	
	fclose(v);
	fclose(c);
}
