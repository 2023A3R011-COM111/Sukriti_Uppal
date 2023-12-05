#include<stdio.h>
int addition(int num1, int num2)
{
    int sum;
    /*arguments are used here*/
    sum=num1+num2;
    /*function return type is integer so we are returnong an integer value,
    the sum of the passed numbers*/
    return sum;
}
int main()
{
    int var1,var2;
    printf("Enter number 1: ");
    scanf("%d",&var1);
    printf("Enter number 2: ");
    scanf("%d",&var2);
    /*calling the function here, the function return type is integer so we need
    an integer variable to hold the returned */

    int result = addition(var1, var2);
    printf("Output: %d", result);

}