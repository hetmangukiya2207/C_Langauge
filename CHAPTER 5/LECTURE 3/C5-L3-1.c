#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int choice;
	
	P("Welcome To The Our Theater...\n\n");
	
	P("Press 1 For Hindi Movie...\n");
	P("Press 2 For South Movie...\n");
	P("Press 3 For English Movie...\n");
	P("Press 4 For Gujrati Movie...\n");
	
	P("\n------------------------------------\n");
	
	P("Enter Your Choice : ");
	S("%d", &choice);
	
	P("\n------------------------------------\n");
	
	switch(choice)
	{
		case 1:
			system("cls");
			P("You Choiced Hindi Movie...\n\n");
			
			P("Press 1 For RRR\n");
			P("Press 2 For Vikram Vedha\n");
			P("Press 3 For KGF Chapter 2\n");
			
			P("\n-----------------------------------\n");
			
			P("Enter Your Choice : ");
			S("%d", &choice);
			
			P("\n------------------------------------\n");
			
			switch(choice)
			{
				case 1 : 
					system("cls");
					P("You choice RRR Movie...");
					break;
					
				case 2 : 
					system("cls");
					P("You choice Vikram Vedha Movie...");
					break;
					
				case 3 : 
					system("cls");
					P("You choice KGF Chapter 2 Movie...");
					break;
				
				default :
					P("Invalid Choice");
					break;
			}
		
			
		case 2 :
			system("cls");
			P("You Choiced Bhojpuri Movie...\n\n");
			
			P("Press 1 For Burbak\n");
			P("Press 2 For Harami Kela\n");
			P("Press 3 For sasur bada paise wala\n");
			
			P("\n-----------------------------------\n");
			
			P("Enter Your Choice : ");
			S("%d", &choice);
			
			P("\n------------------------------------\n");
			
			switch(choice)
			{
				case 1 : 
					system("cls");
					P("You choice Burbak Movie...");
					break;
					
				case 2 : 
					system("cls");
					P("You choice Harami Kela Movie...");
					break;
					
				case 3 : 
					system("cls");
					P("You choice sasur bada paise wala...");
					break;
				
				default :
					P("Invalid Choice");
					break;
			}
		case 3 :
			system("cls");
			P("You Choiced English Movie...\n\n");
			
			P("Press 1 For Name of the king\n");
			P("Press 2 For Stolen\n");
			P("Press 3 For Under world\n");
			
			P("\n-----------------------------------\n");
			
			P("Enter Your Choice : ");
			S("%d", &choice);
			
			P("\n------------------------------------\n");
			
			switch(choice)
			{
				case 1 : 
					system("cls");
					P("You choice Name of the king Movie...");
					break;
					
				case 2 : 
					system("cls");
					P("You choice Stolen Movie...");
					break;
					
				case 3 : 
					system("cls");
					P("You choice Under world Movie...");
					break;
				
				default :
					P("Invalid Choice");
					break;
			}	
			
		case 4 :
			system("cls");
			P("You Choiced Gujrati Movie...\n\n");
			
			P("Press 1 For Fakat mahila mate\n");
			P("Press 2 For viki no var ghodo\n");
			P("Press 3 For papa tamne nahi samjay\n");
			
			P("\n-----------------------------------\n");
			
			P("Enter Your Choice : ");
			S("%d", &choice);
			
			P("\n------------------------------------\n");
			
			switch(choice)
			{
				case 1 : 
					system("cls");
					P("You choice Fakat mahila mate Movie...");
					break;
					
				case 2 : 
					system("cls");
					P("You choice viki no var ghodo...");
					break;
					
				case 3 : 
					system("cls");
					P("You choice papa tamne nahi samjay Movie...");
					break;
				
				default :
					P("Invalid Choice");
					break;
			}
	}
	P("\n\n");
}
