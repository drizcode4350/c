#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    char str1[20];
    int j=0;
    printf("Enter a string: \n");
    scanf("%s",&str);
    printf("Original string: %s \n");
    int length=strlen(str);
    for(int i=length-1; i>=0; i--)
    {
        str1[j]=str[i];
        j++;
    }
    str1[j]='\0';
    printf("Reverse string: %s \n",str1);
    if(strcmp(str,str1)==0)
    {
        printf("Palindrome \n");
    }
    else
    {
        printf("Not Palindrome \n");
    }
    return 0;
}