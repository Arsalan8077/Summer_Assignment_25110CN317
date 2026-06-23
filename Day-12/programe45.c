#include<stdio.h>
#include<string.h>
int palindrome(char str[])//function to  check palindrome
{
    int i,len;
    len=strlen(str);
    for(i=0;i<len/2;i++)
    { 
        if(str[i]!=str[len-i-1])
        return 0;// not palindrome
    }
    return 1;//palindrome
}
int main()
{
    char str[100];
    printf("enter a string");
    scanf("%s",str);
    if(palindrome(str))
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}