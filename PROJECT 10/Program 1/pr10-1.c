#include<stdio.h>

void main()
{
	FILE *p1;
	
	p1  = fopen("File 1.txt","w");
	
	fprintf(p1,"Hello\n");
	fprintf(p1,"How Are You ?\n");
	
	fclose(p1);
}
