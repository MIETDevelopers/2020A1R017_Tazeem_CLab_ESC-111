// Program to check whether the ch is a vowel or consonant.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Alphabet: \n");
    scanf("%s", &ch);

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||ch == 'u' || ch == 'U')
    {
        printf("%s is a Vowel. \n");
    }
    else{
        printf("%s is a Consonent");
    }
    return 0;
}