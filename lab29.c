// Program to store information of a student using union.

#include<stdio.h>
#include<string.h>
union student
{
    char name[50];
    char rolllno[20];
    int sem;
} stud;

int main(){
    
    printf("Enter Name of a Student: \n");
    gets(stud.name);
    printf("Enter Roll No.: \n");
    scanf(" %s", stud.rolllno);
    printf("Enter Semester: \n");
    scanf("%d", &stud.sem);

    //Only one among the three will be printed because, we can access only one member of union at a time.
    printf("Student Name: %s\n", stud.name);
    printf("Roll No.: %s \n", stud.rolllno);
    printf("Semester: %d \n", stud.sem);

    return 0;
}
