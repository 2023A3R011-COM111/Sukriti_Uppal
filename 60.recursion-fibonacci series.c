#include<stdio.h>
/*program to know the nth term of fibonacci series*/
int fibonacci(int n);
int main()
{
    int num;
    /*input from the user*/
    printf("Enter a positive integer for the term number: ");
    scanf("%d", &num);
    /*check for the positive number*/
    if(num<=0)
    {
        printf("The term number cannot be negative or zero.\n");
    }
    else
    {
        /*call the fibonacci function*/
        int result=fibonacci(num);
        if(result == -1)
        {
            printf("error:invalid term number entered.\n");
        }
        else
        {
            printf("The %dth term in the fibonacci series is: %d\n", num,result );
        }
    }
    return 0;
}
int fibonacci(int n)
{
    if (n<=0)
    {
        printf("\nerror: term cannot be negative.\n");
        return -1;
    }
    else if(n==1 || n==2)
    {
        /*base case: first two terms are 1.*/
        return 1;
    }
    else
    {
        /*recursive function*/
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}