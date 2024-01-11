#include<stdio.h>
//function prototype
float max(float array[], int n);
int main()
{
    float value[4] = {4,4.5,6.5,-7.1};
    printf("largest value is: %f\n", max(value,4));
    return 0;
}
//function definition
float max(float array[], int n)
{
    int i;
    float large;

    // let first element is largest.
    large = array[0];
    
    // iterate through the array
    for(i=1;i<n;i++)
    {
        if(large < array[i])
        large = array[i];
    }
    //return the largest value
    return large;
}