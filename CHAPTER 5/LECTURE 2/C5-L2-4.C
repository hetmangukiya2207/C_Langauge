#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("enter C:");
	scanf("%d",&c);
	printf("enter D:");
	scanf("%d",&d);
	printf("enter E:");
	scanf("%d",&e);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
				  printf("A is big.");
				}
				else
				{
				   printf("E is big.");
				}
			}
			else
			{
				if(d>e)
				{
				   printf("D is big.");
				}
				else
				{
				   printf("E is big.");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
				    printf("C is big.");
				}
				else
				{
				    printf("E is big.");
				}
			}
			else
			{
				if(d>e)
				{
				     printf("D is big.");
				}
				else
				{
				     printf("E is big.");
				}
				printf("D is big.");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
			   if(b>e)
			   {
				printf("B is big.");
			   }
			   else
			   {
				printf("E is big.");

			   }
			}
			else
			{
				if (d>e)
				{
					printf("D is big.");
				}
				else
				{
					printf("E is big.");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is big.");
				}
				else
				{
					printf("e is big.");
				}
			}
			else
			{
				if(d>e)
				{
				       printf("D is big.");
				}
				else
				{
				       printf("E is big.");
				}
			}

		}
	}
	getch();
}