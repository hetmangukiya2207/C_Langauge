#include <stdio.h>
#include<conio.h>

main() 
{
  long long n;
  int count = 0;
  clrscr();

  printf("Enter Any Number : ");
  scanf("%lld", &n);
 
  do
  {
    n /= 10;
    ++count;
  } while(n != 0);

  printf("Number of digits: %d", count);
	getch();
}
