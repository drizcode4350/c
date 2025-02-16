#include<stdio.h>
int main()
{
    int ul,ll,i,rev,s,temp;
    s=0;
    printf("Enter upper limit: ");
    scanf("%d",&ul);
    printf("Enter lower limit: ");
    scanf("%d",&ll);
    for(i=ll; i<=ul;i++)
    {
       temp=i;
       while(temp>0)
       {
       rev=temp%10;
       s=(10*s)+rev;
       temp=temp/10;
       }
       if(i==s)
       printf("%d \n",s);
    }
    return 0;
}