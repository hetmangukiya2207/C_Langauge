#include<stdio.h>

main()

{
	char i,j,k='A';
	
	for(i='A'; i<= 'E'; i++)
	{
		for(j=i; i>='A'; j--)
		{
			printf("%c", k);
			k++;
		}
		printf("\n");
	}
}
