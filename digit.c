#include<stdio.h>
int main(){
    int num, lastd;
    printf("Enter a number: ");
    scanf("%d",&num);
    lastd=num%10;
    num=num/10;
    printf("Last digit of a number: %d \n",lastd);
    printf("New Number: %d \n",num);
    return 0;
}