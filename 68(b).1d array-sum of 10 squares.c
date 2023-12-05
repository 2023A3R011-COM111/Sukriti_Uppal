#include<stdio.h>
int main()
{
    int array[10],i,sumsquare=0;

    for(i=0;i<10;i++)
    {
        printf("Enter a[%d]:", i+1);
        scanf("%d", &array[i]);
    }
    for(i=0;i<10;i++)
    {
        sumsquare=sumsquare+array[i]*array[i];
    }
    printf("\nSum of elements = %d",sumsquare);

    return 0;
    
}