#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks of a student: ");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90)
    printf("GRADE O \n");
    else if(marks<=89 && marks>=80)
    printf("GRADE E \n");
    else if(marks<=79 && marks>=70)
    printf("GRADE A \n");
    else if(marks<=69 && marks>=60)
    printf("GRADE B \n");
    else if(marks<=59 && marks>=50)
    printf("GRADE C \n");
    else if(marks<=49 && marks>=40)
    printf("GRADE D \n");
    else
    printf("FAIL");
    return 0;
}