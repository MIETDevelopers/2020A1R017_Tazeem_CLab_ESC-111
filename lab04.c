// Program for arithmetic operations like addition, subtraction, multiplication and remainder

#include<stdio.h>
int main(){
    int number1, number2, result, option;

    printf("Enter the First Number: \n");
    scanf("%d", &number1);
    printf("Enter the Second Number: \n");
    scanf("%d", &number2);
    printf("Enter Option: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Remainder \n");
    scanf(" %d", &option);

    switch (option)
    {
    // For Addition
    case 1:
        result = number1 + number2;
        printf("%d + %d = %d", number1, number2, result);
        break;
    // For Subtraction
    case 2:
        result = number1 - number2;
        printf("%d - %d = %d", number1, number2, result);
        break;
    // For Multiplication
    case 3:
        result = number1 * number2;
        printf("%d * %d = %d", number1, number2, result);
        break;
    // For Remainder
    case 4:
        result = number1 % number2;
        printf("Remainder = %d", result);
        break;
    default:
        printf("Invalid Option!\n");
        break;
    }
   return 0;
}