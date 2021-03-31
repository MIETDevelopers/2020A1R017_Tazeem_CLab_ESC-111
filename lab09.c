// Program to calculate area and perimeter of circle, square and rectangle.

#include<stdio.h>
int main(){
    float area, perimeter, radius, side, length, width;
    int option;

    printf("Enter Option:\n 1.Area and Perimeter of Circle.\n 2.Area and Perimeter of Square.\n 3.Area and Perimeter of Rectangle.\n");
    scanf("%d", &option);

    switch(option){
    // For Circle
    case 1:
        printf("Enter the radius of Circle: \n");
        scanf("%f", &radius);
        area = (3.14159 * radius * radius);
        perimeter = (2 * 3.14159 * radius);
        printf("Area of Circle = %f \nPerimeter of Circle= %f \n", area, perimeter);
        break;
    // For Square
    case 2:
        printf("Enter the Side of Square: \n");
        scanf("%f", &side);
        area = (side * side);
        perimeter = (4 * side);
        printf("Area of Square = %f \nPerimeter of Square = %f \n", area, perimeter);
        break;
    // For Rectangle
    case 3:
        printf("Enter the Length of Rectangle: \n");
        scanf("%f", &length);
        printf("Enter the Width of Rectangle: \n");
        scanf("%f", &width);
        area = (length * width);
        perimeter = 2 * (length + width);
        printf("Area of Rectangle = %f \nPerimeter of Rectangle = %f \n", area, perimeter);
        break;

    default:
        printf("Invalid Option!\n");
        break;
    }
    return 0;
}