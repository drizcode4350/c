#include<stdio.h>
int main()
{
    int num, digit, s;
    s=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        digit=num%10;
        s=s+digit;
        num=num/10;
    }
    printf("Digit Sum= %d \n",s);
    return 0;
}