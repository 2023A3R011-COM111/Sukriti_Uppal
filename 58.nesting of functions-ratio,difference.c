#include<stdio.h>
/*function prototype*/
float ratio(int x, int y, int z);
int difference(int x,int y);
int main()
{
    int a,b,c;
    /*input values*/
    printf("Enter three integers: ");
    scanf("%d %d %d", &a,&b,&c);
    /*display the ratio*/
    printf("The calculated ratio is: %f\n",ratio(a,b,c));
    return 0;
}
/*function to calculate the ratio*/
float ratio(int x,int y,int z)
{
    if (difference(y,z))
    {
        return(float)x/(y-z);
    }
    else
    {
        return 0.0;
    }
}
/*function to check the difference between two integers*/
int difference(int p, int q)
{
    if(p!=q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
