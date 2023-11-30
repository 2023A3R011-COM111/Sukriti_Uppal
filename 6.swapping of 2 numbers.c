#include<stdio.h>
int main()
{
     // Program for swapping two variables without using a third variable
    int a, b;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping :- value 1 is : %d and value 2 is %d \n", a,b);
 
    // Sum of both numbers is stored in 'a'
    a = a + b;
    // Difference of sum and original 'b' is stored in 'b'
    b = a - b;
    // Difference of sum and new 'b' is stored in 'a'
    a = a - b;
 
    printf("After swapping :- value 1 is : %d and value 2 is : %d \n", a, b);
    return 0;
}
    
