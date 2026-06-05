#include <stdio.h>
int main ()
{
    int start,end,i,prime,j; // variable decleration
    printf("enter the start of tyhe range ");
    scanf("%d",&start); // input number from the user
    printf("enter the end of the range");// input the end range from the user
    scanf("%d",&end);
    for (i=start;i<=end;i++)// loop for the range
    { 
        prime=1; // decleration of the prime variable
        if(i<2)//checks the number is less than 2 or not
        prime=0;
        for(j=2;j<i;j++) // loop to check the number is prime or not
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        printf("%d  ",i);// print the desired result
    }
    return 0;
}
