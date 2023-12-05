#include<stdio.h>
void swap(int*, int*);
int main()
{
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("Inside the caller function values are:\na=%d b=%d\n",b,a);
    return 0;
}
void swap(int*x, int*y)
{
    int swapvar;
    swapvar=*x;
    *x=*y;
    *y=swapvar;
    printf("Inside the function values are:\nx=%d y=%d\n",*x,*y);
}