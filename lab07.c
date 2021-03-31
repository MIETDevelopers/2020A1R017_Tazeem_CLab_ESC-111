// Program to check if a number is Even or Odd.

#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number: \n");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("%d is Even.\n", x);
    }
    else{
        printf("%d is Odd. \n", x);
    }
    return 0;
}