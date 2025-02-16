#include <stdio.h>
int main(){
    int n,ch,rows=5;
    float f=1,s=0;
printf("Enter your choice");
printf("1-series,2-pattern");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            f=f*j;
        }
        s=s+(i/f);
        f=1;
    }
    printf("%f",s);
    break;

    case 2:
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("");
        }
        for(int j=0;j<rows-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    break;
    default: printf("Wrong input \n");
    return 0;
}
}