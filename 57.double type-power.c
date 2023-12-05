#include<stdio.h>
/*function prototype declaration*/
double power(int x,int y);
int main()
{
    int x,y;
    /*input data*/
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    /*display result*/
    printf("%d to the power %d is %f\n", x,y, power(x,y));
    return 0;
}
/*function definition for power*/
double power(int x,int y)
{
    double p = 1.0;
    /*x to the power zero*/
    if(y>=0)
    {
        while(y--)
        {
            /*computes positive powers*/
            p*=x;
        }
    }
        else
        {
            while(y++)
            {
                /*compute negative power*/
                p/=x;
            }
        }
    
    return p;/*return double type*/
}