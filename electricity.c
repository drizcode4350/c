#include<stdio.h>
int main()
{
    double unit, bill;
    printf("Enter electricity unit consumed:");
    scanf("%lf",&unit);
    if(unit<=1 && unit>=50)
    {
        bill=1.25*unit;
    }
    else if(unit<=51 && unit>=100)
    {
        bill=(1.25*50)+1.5*(unit-50);
    }
    else if(unit<=101 && unit>=200)
    {
        bill=(1.25*50)+(1.5*50)+2.0*(unit-100);
    }
    else if(unit<=201 && unit>=300)
    {
        bill=(1.25*50)+(1.5*50)+(2.0*100)+2.5*(unit-200);
    }
    else
    {
        bill=(1.25*50)+(1.5*50)+(2.0*100)+(2.5*100)+3.25*(unit-300);
    }
    bill=bill+(bill*0.2);
    printf("Electricity Bill: %.2lf \n",bill);
    return 0;
}