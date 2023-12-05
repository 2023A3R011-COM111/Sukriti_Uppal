#include <stdio.h>
int main()
{ 
    int array[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]:", i);
        scanf("%d", &array[i]);
    }
    printf("\nPrinting elements of the array: \n\n");

    for(i=0;i<5;i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}