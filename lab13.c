//  Program to check if a number is prime or not using a while loop.

#include<stdio.h>
int main(){
    int x, i, count=0;

    printf("Enter a Number: \n");
    scanf("%d", &x);

    i=1;
    while (i<=x)
    {
        if (x % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        printf("%d is a Prime Number.", x);
    }
    else{
        printf("%d is not a Prime Number.", x);
    }
    return 0;
}