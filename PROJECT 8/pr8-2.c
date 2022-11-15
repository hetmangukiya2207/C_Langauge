#include <stdio.h>

int main()
{
    
    int n, i;    
    printf("Enter size of array: ");
    scanf("%d", &n);
	int arr[n];
	int * pt = arr;
    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
    	printf("arr[%d] :",i);
        scanf("%d", pt);

        
        pt++;   
    }

    
    pt = arr;

    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        
        printf("%d, ", *pt);

                pt++;
    }

    return 0;
}
