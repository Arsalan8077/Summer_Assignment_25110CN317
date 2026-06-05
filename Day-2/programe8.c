#include <stdio.h>
int main ()
{
    int n,rev=0,d,org; // variable decleration
    printf("enter the number ");
    scanf("%d",&n); // input number from the user
    org=n;
    while(n!=0)// checks whether the number is equal to zero or not 
    {
        d=n%10; //removes the last digit of the number 
        rev=rev*10+d;// add the vale of d and multiply it by 10 anr update it in rverse variable
        n/=10;// removes the last digit of the variable 
    }
    if(org==rev)// checks whether the number is palindrome or not
    printf("the number is palindrome"); // give the desired result 
    else
    printf("the number is not palindrome");// give the desired result
    return 0;
}
