#include <stdio.h>
int main ()
{
    float radius, side, length, breadth,circleArea,circlePerimeter,squareArea,squarePerimeter,rectangleArea,rectanglePerimeter;
   
    //1.input from user
    //2.Calculate the area and perimeter for each shape and display the calculated values
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    printf ("Enter the side of the square: ");
    scanf("%f",&side);

    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);

    printf("Enter the width of the rectangle: ");
    scanf("%f",&breadth);

    printf("\n");
    //circle
    circleArea =3.142 * radius * radius;
    circlePerimeter =2*3.142*radius;

    printf("Circle-> \n");
    printf("Area: %.f\n",circleArea);
    printf("Perimeter: %.f\n",circlePerimeter);

    //square
    squareArea = side*side;
    squarePerimeter = 4*side;
    
    printf("\nSquare-> \n");
    printf("Area: %.f\n",squareArea);
    printf("Perimeter: %.f\n",squarePerimeter);

    //rectangle
    rectangleArea= length*breadth;
    rectanglePerimeter=2*(length+breadth);
    
    printf("\nRectangle-> \n");
    printf("Area: %.2f\n", rectangleArea);
    printf("Perimeter: %.2f\n",rectanglePerimeter);

    return 0;

}


