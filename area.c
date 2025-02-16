#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,ar,s;
    printf("Enter sides of a triangle:");
    scanf("%f",&a);
    printf("Enter sides of a triangle:");
    scanf("%f",&b);
    printf("Enter sides of a triangle:");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle= %.2lf \n",ar);
}