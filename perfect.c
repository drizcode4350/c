#include<stdio.h>
int main()
{
    int num,i,s;
    s=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    for(i=1; i<=num-1;i++)
    {
        if(num%i==0)
        {
            s=s+i;
        }
    }
    if(num==s)
    {
        printf("%d is Perfect Number.\n",num);
    }
    else
    {
        printf("%d is not Perfect Number. \n",num);
    }
    return 0;
}