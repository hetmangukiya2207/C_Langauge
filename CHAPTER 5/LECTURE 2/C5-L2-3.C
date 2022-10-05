#include<stdio.h>
#include<conio.h>

main()
{
 int a, b, c, d;

   clrscr();
   printf("Enter the value of A =");
   scanf("%d", &a);
   printf("Enter the value of B =");
   scanf("%d", &b);
   printf("Enter the value of C =");
   scanf("%d", &c);
   printf("Enter the value of D =");
   scanf("%d", &d);

   if(a==b && b==c && c==d && d==a)
   {
     printf("all value are same");
   }
   else
   {
      if(a==b && b==c)
      {
	printf("A B and C are same");
      }
      else if (b==c && b==d)
      {
	printf("D B and C are same");
      }
      else if(a==d && c==d)
      {
	printf("A C and D are same");
      }
      else if(a==b)
      {
	printf("A and B are same");
      }
      else if (b==c)
      {
	printf("B and C are same");
      }
      else if (d==a)
      {
	printf("D and A are same");
      }
      else if(d==b)
      {
	printf("D and B are same");
      }
      else if(d==c)
      {
	printf("D and C are same");
      }
      if(a>b)
      {
	if(a>c)
	{
	  if(a>d)
	  {
	    printf("A is max");
	  }
	  else if(c>d)
	  {
	    printf("C is max");
	  }
	  else
	  {
	    printf("D is max");
	  }
      }
     else
     {
      if(b>c)
      {
       if(b>d)
       {
	 printf("B is max");
       }
       else if (c>d)
       {
	 printf("C is max");
       }
       else
       {
	 printf("D is max");
       }
      }
     }
   }
}
   getch();

}
