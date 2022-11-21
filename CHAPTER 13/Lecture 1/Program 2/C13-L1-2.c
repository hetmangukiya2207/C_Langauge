#include<stdio.h>

struct student
{
	int id;
	char name[100];
	int maths;
	int sci;
	int eng;
	int guj;
	int comp;
	int total;
	float per;
	char grade;
};

void main()
{
	FILE *f1;
	f1 = fopen("F:\\RnW Work\\Flutter Devlopment\\C Langauge\\Chapter\\CHAPTER 13\\Lecture 1\\Program 2\\file 1.txt","a");
	
	int n;
	
	printf("Enter N : ");
	scanf("%d", &n);
	
	struct student s[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		system ("cls");
		printf("%d)\n", i+1);
		printf("Enter Name : ");
		scanf("%s", &s[i].name);
		printf("Enter Id : ");
		scanf("%d", &s[i].id);
		printf("Enter Maths Marks : ");
		scanf("%d", &s[i].maths);
		printf("Enter Gujrati Marks : ");
		scanf("%d", &s[i].guj);
		printf("Enter English Marks : ");
		scanf("%d", &s[i].eng);
		printf("Enter Science Marks : ");
		scanf("%d", &s[i].sci);
		printf("Enter Computer Marks : ");
		scanf("%d", &s[i].comp);
		printf("Enter Percentage : ");
		scanf("%f", &s[i].per);
	}
	
	fprintf(f1,"Name\tId\tMaths\tGujrati\tEnglish\tScience\tComp\tPer\n");	
	fprintf(f1,"------- ------- ------- ------- ------- ------- ------- -------\n");
	
	for(i=0; i<n; i++)
	{
		fprintf(f1,"%d\t%s\t%d\t%d\t%d\t%d\t%d\t%2.f\n", s[i].id, s[i].name, s[i].maths, s[i].guj, s[i].eng, s[i].sci, s[i].comp, s[i].per);
	}
}
