//Program for reading and writing the student marks data to files.

#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rollno;
    float marks;

};
int main()
{
    struct student swrite[3], sread[3];
    FILE *ptr;
    int i;
    
    //writing in the file
    ptr = fopen("file.txt", "wb");

    if(ptr == NULL){
        printf("File cannot be opened!\n");
    }
    else{
    for(i=0; i<3; i++){
       fflush(stdin);
        printf("Enter Roll no. : \n");
        scanf("%d", &swrite[i].rollno);
        printf("Enter Marks: \n");
        scanf("%f", &swrite[i].marks);
    }
    fwrite(swrite, sizeof(swrite), 3, ptr);
    fclose(ptr);
    }

    // reading from the file
    ptr = fopen("file.txt", "rb");
    
    fread(sread, sizeof(sread), 3, ptr);
    printf("Data in the file is :\n");

    for (i = 0; i <3; i++){
        printf("Roll no. : %d\n",sread[i].rollno);
        printf("Marks: %f\n",sread[i].marks);
    }
    fclose(ptr);
    return 0;
}