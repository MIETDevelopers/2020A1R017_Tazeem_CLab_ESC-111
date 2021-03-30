#include<stdio.h>
int main(){
    float number1, number2, result;
    char operator;

    printf("Enter the First Number: \n");
    scanf("%f", &number1);
    printf("Enter Operator (Either + or - or / or *): \n");
    scanf(" %c", &operator);
    printf("Enter the Second Number: \n");
    scanf("%f", &number2);

    // Addition, Subtraction, Multiplication and Diviision - Using Switch Case
    switch(operator){
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;    
        default:
            printf("Invalid Operator! /n");
        return -1;
    }

    printf("%f %c %f = %f", number1, operator, number2, result);
    return 0;
}