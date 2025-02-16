#include<stdio.h>
int main()
{
    int num1,num2,ldigit1,ldigit2,p;
    p=1;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    ldigit1=num1%10;
    ldigit2=num2%10;
    num1=(num1/10)*10+ldigit2;
    num2=(num2/10)*10+ldigit1;
    p=num1*num2;
    printf("New Number 1: %d \n",num1);
    printf("New Number 2: %d \n",num2);
    printf("Product: %d \n",p);
    return 0;
}