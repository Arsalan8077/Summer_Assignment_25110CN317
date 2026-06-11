#include <stdio.h>
int main()
{ 
    int n,fact=1;// initialisation
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    for(int i=1;i<=n;i++) //for loop for factorial
    {
    fact*=i; // there is 1 in the fact and 1 in now the both get multiply and as i got increses
    }        // the number gets to multiply in the fact band the loop continues in a cycle
    printf("the factorial of the number is =%d",fact);
    return 0;
}