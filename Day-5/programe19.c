#include <stdio.h>
int main ()
{ 
    int n,i;// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    for(i=1;i<=n;i++)
    {
        if(n%i==0) // checks the factor of the number
        {
            printf("%d  ",i);
    
        }
    }
    return 0;
}