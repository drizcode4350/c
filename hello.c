//using fgets function
#include <stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter string: ");
    fgets(str,20,stdin);
    printf("%s",str);
    return 0;
}