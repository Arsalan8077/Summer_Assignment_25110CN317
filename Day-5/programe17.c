#include <stdio.h>
int main ()
{ 
    int n,i,sum=0;// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    for (i=1;i<n;i++) // loop for perfeact number
    {
        if(n%i==0) // seperate the lastb bdigit
        {
            sum+=i;// add sum in the digit 
        }
    }
    if(sum==n) // if sum is equal to original number the number is perfect otherwise the number is not perfect
    printf("%d is a perfect number",n);
    else 
    printf("%d is not a perfect number",n);
    return 0;
}
