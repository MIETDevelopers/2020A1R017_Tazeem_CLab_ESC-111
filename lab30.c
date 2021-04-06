//Program to implement an array of structures for student marks for each student and pass it to function for various operations.

#include<stdio.h>
struct student
{
    char rollno[10];
    char name[30];
    float marks;
};
void getInfo(struct student s[], int n)
{
    int i;
    for(i=0; i<n; i++){
        printf("Student %d : \n", (i+1));
        printf("Enter Roll no. : \n");
        scanf("%s", &s[i].rollno);
        printf("Enter Name : \n");
        scanf("%s", &s[i].name);
        printf("Enter Marks : \n");
        scanf("%f", &s[i].marks);
    }
}
void printInfo(struct student s[], int n)
{
    int i;
    for(i=0; i<n; i++){
        printf("Student %d : \n", (i+1));
        printf("Roll no. : %s \n", s[i].rollno);
        printf("Name : %s \n", s[i].name);
        printf("Marks : %f \n",s[i].marks);
    }
}
int main()
{
    struct student s[3];
    printf("Enter Student Information \n");
    // For input
    getInfo(s, 3);
    printf("The Student Information is: \n");
    // For Printing
    printInfo(s, 3);
    return 0;
}