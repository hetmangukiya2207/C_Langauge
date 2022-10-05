#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
  char ch;


  P("Press M for Monday\n");
  P("Press T for Tuesday\n");
  P("Press W for Wednesday\n");
  P("Press t for Thursday\n");
  P("Press F for Friday\n");
  P("Press s for Saturday\n");
  P("Press S for Sunday\n");

  P("Enter Your Day: ");
  scanf("%c",&ch);

  switch(ch)
  {
    case'M':
     P("Monday\n");
     break;
    case'T' :
     P("Tuesday\n");
     break;
    case'W':
     P("Wednesday\n");
     break;
    case't':
     P("Thursday\n");
     break;
    case'F':
     P("Friday\n");
     break;
    case's':
     P("Saturday\n");
     break;
    case'S':
     P("Sunday\n");
     break;
     }
  getch();
 }

