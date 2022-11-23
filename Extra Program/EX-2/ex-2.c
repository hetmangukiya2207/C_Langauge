#include<stdio.h>

void main(){
	
	FILE *p1,*p2;
	
	p1 = fopen("File 1.txt","r");
	p2 = fopen("File 2.txt","w");
	
	int a,r,s=0;
	
	fscanf(p1,"%d",&a);
	
	while(a!=0){
		r=a%10;
		s=s*10+r;
		a=a/10;
	}
	fprintf(p2,"%d ",s);
	
}
