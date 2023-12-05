#include<stdio.h>
int main()
{
    int array[5],i,sum=0;

    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]:", i);
        scanf("%d", &array[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=array[i];
    }
    printf("\nSum of elements = %d",sum);

    return 0;
    
}