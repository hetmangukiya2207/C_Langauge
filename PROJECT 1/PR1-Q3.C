#include<stdio.h>
#include<conio.h>

main()
{
 float c;
 clrscr();

 printf("Enter Temp In Celsius = ");
 scanf("%f",&c);

 printf("Temperature In Fahrenheit is %f",(c*9/5)+32);

 getch();
}