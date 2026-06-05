#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,next; // variable decleration
    printf("enter the number ");
    scanf("%d",&n); // input number from the user
    printf("fibonacci series:\n");
    for (i=0;i<n;i++)// loop for i upto n
    {
        printf("%d ",a); // print the first term of the fibonacci series
        next=a+b;// add both the terms
        a=b;// store the value of b in a
        b=next; // stores the vlue of next in b 
    }
    return 0;
}