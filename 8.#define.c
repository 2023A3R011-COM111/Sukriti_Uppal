#include <stdio.h> 
// Program to illustrate how to use #define to declare 
#define PI 3.14
int main() 
{ 
    int radius, CircleArea;
	
	printf("Enter the value of radius of circle: ");
	scanf("%d",&radius);

    CircleArea = PI * radius * radius;
    
    printf("Area of Circle of radius %d: %d", radius, CircleArea ); 

	return 0; 
}
