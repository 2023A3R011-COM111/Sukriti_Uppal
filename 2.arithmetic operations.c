#include<stdio.h>
int main()
{
    int num1, num2;
    float sum,difference,product,quotient,modulus;
    
    //input two integers from user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    //formulas and result print
    sum= num1+num2;
    printf("sum: %f\n", sum);

    difference= num1-num2;
    printf("difference: %f\n", difference);

    product= num1*num2;
    printf("product: %f\n", product);

    quotient= num1/num2;
    printf("remainder: %f\n", quotient);

    modulus= num1%num2;
    printf("modulus: %f\n", modulus);

    return 0;
}
