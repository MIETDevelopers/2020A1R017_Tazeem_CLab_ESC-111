#include<stdio.h>
int main(){
    float a, b, c, max;

    printf("Enter the first number: \n");
    scanf("%f", &a);
    printf("Enter the Second number: \n");
    scanf("%f", &b);
    printf("Enter the Third number: \n");
    scanf("%f", &c);
    
    //For Finding Maximum of 3 Nos.
    max = a;
    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }

    printf("Maximum No. is %.2f", max);
    return 0;
}