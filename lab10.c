// Program to calculate factorial of a number using a for loop.

#include<stdio.h>
int main(){
    int fact, x, i;

    printf("Enter a number: \n");
    scanf("%d", &x);

    if(x > 0){
        fact = 1;
        for (i = 1; i <= x; i++)
        {
            fact = fact * i;
        }
     printf("Factorial of %d = %d", x, fact);   
    }
    else if(x < 0)
    {
        printf("Factorial is not defined for a negative nos. \n");
    }
    else if(x == 0){
        printf("Factorial of %d = 1", x);
    }
    return 0;
}