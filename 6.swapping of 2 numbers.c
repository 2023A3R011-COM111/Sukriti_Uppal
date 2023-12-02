#include<stdio.h>
int main()
{
     // Program for swapping two variables without using a third variable
    int var1, var2;
    printf("Enter the two variables : ");
    scanf("%d %d", &var1, &var2);
    printf("Before swapping :- variable 1 is : %d and variable 2 is %d \n", var1,var2);
 
    // Firstly, sum of both numbers is stored in 'var1'
    var1 = var1 + var2;
    // Then difference of sum and original 'var2' is stored in 'var2'
    var2 = var1 - var2;
    // Difference of sum and new 'b' is stored in 'a'
    var1 = var1 - var2;
 
    printf("After swapping :- variable 1 is : %d and variable 2 is : %d \n", var1, var2);
    
    return 0;
}
    
