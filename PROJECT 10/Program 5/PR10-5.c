#include<stdio.h>

void main()
{
	FILE *f1, *f2;
	int a;
	f1 = fopen("File 1.txt","r");
	f2 = fopen("File 2.txt","a"); 
	
	fscanf(f1,"%d", &a);
	printf("Value From File : %d", a);
	fprintf(f2,"%d",a);
	
	fclose(f1);
	fclose(f2);
}
