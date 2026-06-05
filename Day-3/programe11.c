#include <stdio.h>
int main()
{
    int a,b,i,gcd; // variable decleration
    printf("enter two numbers");
    scanf("%d %d",&a,&b); // input number from the user
    for(i=1;i<=a&&i<=b;i++)
    {if(a%i==0&&b%i==0)// checks if both have same gcd or not 
        {
            gcd=i;
        }
    }
    printf("gcd = %d",gcd);// print the desired gcd
}