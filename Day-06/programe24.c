#include <stdio.h>
int main ()
{ 
    int n,x;// decleration of variables
    long long result=1;
    printf("enter the base (x):");
    scanf(" %d",&x);// input the number from the user
    printf("enter the power(n):");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
         result=result*x;// give thye desired result by giving power of that number
    }
    printf("%d^%d =%lld\n",x,n,result);
    return 0;
}
