// Program to calculate sum of digits of a number using a while loop.

#include<stdio.h>
int main(){
	int m,n,sum=0;

	printf("Enter the Number: \n");
	scanf("%d", &n);

	while(n>0){
		m = n % 10;
		sum = sum + m;
		n = n / 10;
	}
	printf("Sum of digits of the entered No. = %d\n", sum);
	return 0;
}