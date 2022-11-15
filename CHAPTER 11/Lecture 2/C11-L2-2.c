#include<stdio.h>

void sort(int a[100], int n);

void main()
{
 int a[100], i, n;
 
 printf("Enter n: ");
 scanf("%d\n", &n);
 

 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d", &a[i]);
 }
 
 sort(a,n);

 printf("Array in ascending order is:\n");
 for(i=0;i< n;i++)
 {
  printf("%d\t", a[i]);
 }
 
}

void sort(int a[10], int n)
{
 int i, j, temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]>a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}
