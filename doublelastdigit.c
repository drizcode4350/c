#include<stdio.h>
int main()
{
    int num,lastd;
    printf("Enter a number: ");
    scanf("%d",&num);
    lastd=num%10;
    lastd=2*lastd;
    num=(num/10)*10+lastd;
    printf("New number: %d \n",num);
    return 0;
}