#include<stdio.h>
main()
{
   int i,j,b,n,counter,ave;
   printf ("Enter the value of N :");
   scanf ("%d", &n);
   int a[n];
   printf ("Enter the numbers :");
   for (i=0; i<n; i++)
      scanf ("%d",&a[i]);
   for (i=0; i<n; i++)
   {
      for (j=i+1; j<n; j++)
	  {
         if (a[i] < a[j])
		 {
            b = a[i];
            a[i] = a[j];
            a[j] = b;
         }
      }
   }
   printf ("The numbers arranged in descending order are given below\n");
   for (i=0; i<n; ++i)
   {
      printf ("%d\n",a[i]);
  
	}
	 printf ("The 2nd largest number is = %d\n", a[1]);
}
	 
