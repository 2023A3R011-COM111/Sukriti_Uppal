#include<stdio.h>
void insertionsort(int array[],int size)
{
    int x,y,key;
    for(x=1;x<size;x++)
    {
        key=array[x];
        y=x-1;
        while(y>=0 && array[y]>key)
        {
            array[y+1]=array[y];
            y=y-1;
        }
        array[y+1]=key;
    }
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d elements:\n", size);

    for(int a=0;a<size;a++)
    { 
        scanf("%d", &array[a]);
    }

    insertionsort(array,size);
    printf("Sorted array: ");

    for(int a=0;a<size;a++)
    { 
        printf("\t%d\t", array[a]);
    }
    return 0;
}
