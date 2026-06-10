#include <stdio.h>
int main ()
{ 
    int n,i=0,binary[32];// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    while(n>0)
    {
        binary[i]=n%2;// convert itno binary equivalent
        n=n/2;
        i++;
    }
    printf("Binary equaivalent:");
    for(int j =i-1;j>=0;j--) //print the desired result
    {
        printf("%d", binary[j]);
    }
    return 0;
}