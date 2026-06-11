#include<stdio.h>
int main()
{
    int n,rev=0,d; // variable decleration
    printf("enter the number ");
    scanf("%d",&n); // input number from the user
    while(n!=0)
    {
    d=n%10;// remove the last digit of the number 
    rev=rev*10+d;// add the last digit and multiply it by 10 and update it in the rev variable
    n/=10;// remove the last digit of the number
    }
    printf(" THE REVERSE OF THE NUMBER IS =%d",rev);// print the desired result
    return 0;
}
