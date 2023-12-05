#include<stdio.h>
int main()
{
    int x;
    float array[10],value,sumsquare;

    printf("Enter 10 desired values: \n");
    
    for(x=0;x<10;x++)
    {
        scanf("%f",&value);
        array[x]=value;
    }
    sumsquare=0.0;
    for(x=0;x<10;x++)
    sumsquare=sumsquare+array[x]*array[x];

    printf("\n");
    for(x=0;x<10;x++)
    printf("x[%2d]=%5.2f\n",x+1,array[x]);

    printf("\nSum of squraes of entered values= %.2f\n",sumsquare);
 
    return 0;   

}