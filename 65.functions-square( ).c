#include<stdio.h>
float square(float x);
int main()
{
    float m,n;
    printf("\nEnter a number for finding square \n");
    scanf("%f", &m);
    n =square(m);
    printf("Sqaure of the provided input is:%f\n",n);
}
float square(float x)
{
    float p;
    p = x*x;
    return (p);
}