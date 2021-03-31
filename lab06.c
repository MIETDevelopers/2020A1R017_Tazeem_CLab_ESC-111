// Program to find the Euclidean distance between two points in a plane.

#include<stdio.h>
#include<math.h>
int main(){
    float x1, x2, y1, y2, distance;

    printf("Enter x1: \n");
    scanf("%f", &x1);
    printf("Enter y1: \n");
    scanf("%f", &y1);
    printf("Enter x2: \n");
    scanf("%f", &x2);
    printf("Enter y2: \n");
    scanf("%f", &y2);
    
    distance = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

    printf("Distance = %f", distance);
    return 0;
}