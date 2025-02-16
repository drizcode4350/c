#include<stdio.h>
int main()
{
    int num,c;
    c=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        c++;
    }
    if(c==2)
    {
        printf("%d is a Prime Number. \n",num);
    }
    else
    {
        printf("%d is a Composite Number. \n",num);
    }
    return 0;
}