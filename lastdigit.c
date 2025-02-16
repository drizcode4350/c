#include<stdio.h>
int main()
{
    int num, lastd;
    printf("Enter a number: ");
    scanf("%d",&num);
    lastd=num-(num/10)*10;
    printf("Last digit of a number: %d \n",lastd);
    return 0;
}