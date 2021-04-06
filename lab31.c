//Program to read and write in a file.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char ch[50];
    // writing in the file
    fptr = fopen("file.txt", "w");
    if(fptr == NULL)
    {
        printf("File could not be opened \n");
    }else{
            fprintf(fptr, "Hello World \n");
            printf("Writing in a file done..\n");
            fclose(fptr);
    }
    
    // reading the file
    fptr = fopen("file.txt", "r");
    if(fptr == NULL){
        printf("File could not be opened \n");
    }else{
            fgets(ch, 50, fptr);
    }
    printf("The data in the file is :\n%s \n", ch);
    fclose(fptr);
    return 0;
}