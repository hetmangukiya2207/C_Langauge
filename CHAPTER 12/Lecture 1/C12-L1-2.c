#include<stdio.h>
struct employee {
	int id;
	char name[100];
	int age;
	char role[100];
	char city[100];
	int exp;
	char cname[100];
	
};
void main(){
	int n,i;
	printf("enter number of employee :");
	scanf("%d",&n);
	
	struct employee s[n];
	for (i=0;i<n;i++)
	{
		system("cls");
		printf("enter employee name\t: ");
		scanf("%s",&s[i].name);
		printf("enter employee id\t: ");
		scanf("%d",&s[i].id);
		printf("enter employee age\t: ");
		scanf("%d",&s[i].age);
		printf("enter employee role\t: ");
		scanf("%s",&s[i].role);
		printf("enter employee city\t: ");
		scanf("%s",&s[i].city);
		printf("enter employee experience\t: ");
		scanf("%d",&s[i].exp);
		printf("enter employee company name\t: ");
		scanf("%s",&s[i].cname);
	}
	system("cls");
	printf("id\tname\trole\texp\tcname\tage\tcity\n\n");
	for (i=0;i<n;i++){
		printf("%d\t%s\t%s\t%d\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].role,s[i].exp,s[i].cname,s[i].age,s[i].city);
	}
}
