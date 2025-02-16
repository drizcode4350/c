#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    char str1[20];
    int j=0;
    printf("Enter string: \n");
    scanf("%s",&str);
    printf("Original string: %s \n",str);
    int length= strlen(str);
    for(int i=length-1; i>=0; i--)
    {
        str1[j]=str[i];
        j++;
    }
    str1[j]='\0';
    printf("Reversed String: %s \n",str1);
    return 0;
}