// Program to print the Fibonacci sequence using for loop.

#include<stdio.h>
int main(){
    int n, a=0, b=1, c, i;

    printf("Enter the value of n: \n");
    scanf("%d", &n);
    printf("%d\t", a, b);
    for (i = 1; i <= n; ++i)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\t", a);
    }
    return 0;
}