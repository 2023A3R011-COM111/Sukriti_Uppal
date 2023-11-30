#include<stdio.h>
#include<math.h>
int main ()
{
    float feh,cel;
    //Iput from user: temperature in Fahrenheit
    printf("Enter the value of temperature in Fahrenheit: ");
    scanf("%f",&feh);
    //Formula and calculation
    cel=5.0/9.0*(feh-32);
    printf ("The value of temperature in celsius is %f",cel);
    return 0;
}

