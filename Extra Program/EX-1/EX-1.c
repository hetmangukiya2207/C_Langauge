#include<stdio.h>
struct emp 
{
   int eid,bs,i;
	float hra,dt,ta,gs;
   char name[30],dept[30];
};


void main() 
{
	FILE *fp;
	fp = fopen("File 1.txt","a");
	int n;
	printf("enter a number of employee : ");
	scanf("%d",&n);
   struct emp s[n];
   int i;
    
	
   for(i=0;i<n;i++)
   {
		system("cls");
		printf("Employee %d\n",i+1);
      printf("Enter employee Id no. :");
      scanf("%d", &s[i].eid);
      printf("Enter employee name :");
      scanf("%s",s[i].name);
      printf("Enter employee department :");
      scanf("%s",s[i].dept);
      printf("Enter employee base salary :");
      scanf("%d", &s[i].bs);
      printf("Enter employee HRA :");
      scanf("%f", &s[i].hra);
      printf("Enter employee DT :");
      scanf("%f", &s[i].dt);
      printf("Enter employee TA :");
      scanf("%f", &s[i].ta);
    }
    
    system("cls");
	printf("percentage\n\n");
	for (i=0;i<n;i++){
		float hra=(s[i].bs*s[i].hra)/100;
	    float dt=(s[i].bs*s[i].dt)/100;
     	float ta=(s[i].bs*s[i].ta)/100;
		 s[i].gs =s[i].bs + s[i].hra + s[i].dt + s[i].ta;
	}  
		system("cls");
	fprintf(fp,"eid\tname\tdept\tbs\thra\tdt\tta\tgs\n\n");
	for (i=0;i<n;i++){
		fprintf(fp,"%d\t%s\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",s[i].eid,s[i].name,s[i].dept,s[i].bs,s[i].hra,s[i].dt,s[i].ta,s[i].gs);
	} 
}
