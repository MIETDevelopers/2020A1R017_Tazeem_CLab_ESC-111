// Program to find maximum of n numbers using for loop.

#include<stdio.h>
int main(){
    int n, max=0, i, temp;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter a %d Number. \n", i);
        scanf("%d", &temp);
        if (max < temp)
        {
            max =  temp;
        }
    }
    printf("%d is Maximum.", max);
    return 0;
}