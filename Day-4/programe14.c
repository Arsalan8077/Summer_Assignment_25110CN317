#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,next; // variable decleration
    printf("enter the number ");
    scanf("%d",&n); // input number from the user
    if (n==0)// checks whether n is equal to zero or not
    {
        printf("nth term of fibonacci series is 0"); 
    }
    else if(n==1)// checks whether n is equal to 1 or not
    printf("nth fibonacci term is: 1");
    else
    {
        for(i=2;i<=n;i++)// loop for i upto n
        {
        next=a+b; // add both the number a and b
        a=b;// stores the value of b in a
        b=next;// store the value of next in b
        }
        printf("nth fibonacci term is : %d",b);// print the desired result
    }
    return 0;
}