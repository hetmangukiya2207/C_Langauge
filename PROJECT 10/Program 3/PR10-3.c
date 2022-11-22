#include<stdio.h>

void main()
{
	FILE *f1, *f2, *f3;
	int i,j,c;
	f1  = fopen("File 1.txt","w");
	f2  = fopen("File 2.txt","w");
	f3  = fopen("File 3.txt","w");
	
	for(i=0; i<10; i++)
	{
		if(i%2 == 0)
		{
			fprintf(f1,"%d",i);
		}
		else
		{
			printf(f2,"%d",i);
		}
		
		if(c == 2)
		{
			fprintf(f3,"%d",i);
		}
	}
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
}
