# include <stdio.h>

int main ()
{
    int n ; // initialisation
    printf("enter the number"); 
    scanf("%d",&n); // input the number from the user
    for(int i=1;i<=10;i++) // for loop for the programe it add i to n add the value every time the loop runs 
    {
    printf("%d * %d = %d\n",n,i,n*i); 
    }
    return 0;
}