// Program to check if a number is Armstrong or not using a while loop.

#include<stdio.h>
int main(){
	int temp, m, n, sum=0;

	printf("Enter the Number: \n");
	scanf("%d", &n);

	temp=n;

	while(n > 0){
		m = n % 10;
		sum = sum + m*m*m;
		n = n / 10;
	}
  
  if(temp == sum){
		printf("Number is Armstrong.\n");
	}
	else{
		printf("Number is not Armstrong.\n");
	}
	return 0;
}