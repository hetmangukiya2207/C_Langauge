#include<stdio.h>

void main()
{
	
	FILE *f1,*f2;
	
	f1 = fopen("F:\\RnW Work\\Flutter Devlopment\\C Langauge\\Chapter\\CHAPTER 13\\Lecture 1\\Program 1\\File 1.txt","r");
	f2 = fopen("F:\\RnW Work\\Flutter Devlopment\\C Langauge\\Chapter\\CHAPTER 13\\Lecture 1\\Program 1\\File 2.txt","w");
	int a;
	scanf("%d",&a);
	
	fprintf(f2,"Value Is : %d\n",a);
}
