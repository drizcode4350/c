#include <stdio.h>
#include <math.h>
void sum(int a, int b);
int main()
{
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);
    
    printf("enter 2nd number: ");
    scanf("%d",&b);
    
    sum(a,b);
    return 0;
}

void sum(int a, int b)
{
    int c=a+b;
    printf("sum=%d",c);
}