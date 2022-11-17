#include<stdio.h>
struct student {
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];
	
};
void main(){
	int n,i;
	printf("enter number of student :");
	scanf("%d",&n);
	
	struct student s[n];
	for (i=0;i<n;i++)
	{
		system("cls");
		printf("enter student name\t: ");
		scanf("%s",&s[i].name);
		printf("enter student id\t: ");
		scanf("%d",&s[i].id);
		printf("enter student age\t: ");
		scanf("%d",&s[i].age);
		printf("enter student course\t: ");
		scanf("%s",&s[i].course);
		printf("enter student city\t: ");
		scanf("%s",&s[i].city);
		printf("enter student std\t: ");
		scanf("%d",&s[i].std);
		printf("enter student school\t: ");
		scanf("%s",&s[i].school);
	}
	system("cls");
	printf("id\tname\tcourse\tstd\tschool\tage\tcity\n\n");
	for (i=0;i<n;i++){
		printf("%d\t%s\t%s\t%d\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].course,s[i].std,s[i].school,s[i].age,s[i].city);
	}
}
