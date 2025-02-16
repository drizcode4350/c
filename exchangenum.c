#include<stdio.h>
int main()
{
    int num, ldigit, sldigit;
    printf("Enter a number: ");
    scanf("%d",&num);
    ldigit=num%10;
    num=num/10;
    sldigit=num%10;
    num=num/10;
    num=(num*100)+(ldigit*10)+sldigit;
    printf("New Number: %d \n",num);
    return 0;
}
