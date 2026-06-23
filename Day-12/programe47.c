#include<stdio.h>
void fibonacci(int n)//function to print fibonacci series
{
    int a=0, b=1, c,i;
    printf(" fibonacci series: %d %d ", a, b);
    {
        for(i=3; i<=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d ", c);
        }
        return c;
    }
}
int main()
{
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
    
    fibonacci(n);
    return 0;
}
    
        