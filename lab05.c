// Program to calculate Area and Perimeter of Circle, Square and Rectangle.

#include<stdio.h>
int main(){
    float area, perimeter, radius, side, length, width;

    // For Circle
        printf("Enter the radius of Circle: \n");
        scanf("%f", &radius);
        area = (3.14159 * radius * radius);
        perimeter = (2 * 3.14159 * radius);
        printf("Area of Circle = %f \nPerimeter of Circle= %f \n", area, perimeter);
    printf("\n");
    // For Square
        printf("Enter the Side of Square: \n");
        scanf("%f", &side);
        area = (side * side);
        perimeter = (4 * side);
        printf("Area of Square = %f \nPerimeter of Square = %f \n", area, perimeter);
    printf("\n");
    // For Rectangle
        printf("Enter the Length of Rectangle: \n");
        scanf("%f", &length);
        printf("Enter the Width of Rectangle: \n");
        scanf("%f", &width);
        area = (length * width);
        perimeter = 2 * (length + width);
        printf("Area of Rectangle = %f \nPerimeter of Rectangle = %f \n", area, perimeter);

    return 0;
}