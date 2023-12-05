#include<stdio.h>
int main()
{
    int sizenum;
    printf("Enter the size of the array: ");
    scanf("%d", &sizenum);

    int array[sizenum];

    printf("Enter %d elements:\n ",sizenum);
    for(int a=0;a<sizenum;a++)
    { 
        scanf("%d", &array[a]);
    }
    int max=array[0];
    int index=0;

    for(int a=1;a<sizenum;a++)
    {
        if(array[a]>max)
        { 
            max=array[a];
            index=a;
        }
    }
    printf(" max is %d at %d ", max,index);

    return 0;
}