#include<stdio.h>
int main()
{
    int n,product=1,d; // variable decleration
    printf("enter the number ");
    scanf("%d",&n); // input number from the user
    while(n!=0)
    {
    d=n%10;// removes the last digit of the code 
    product=product*d;// multiply the last digit and update it in the product variable 
    n/=10; // removes the last digit of the variable
    }
    printf("product of the number is=%d",product);// give the desired result
    return 0;
}
