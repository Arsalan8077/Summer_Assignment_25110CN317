#include <stdio.h>
int countsetsbits(int n)
{
    int count =0;
    while(n>0)
    {
        count+=n&1;//check if the last bit is 1
        n>>=1;//right shift by 1
    }
    return count;
}
int main ()
{ 
    int num;// decleration of variables
    printf("enter the number");
    scanf("%d",&num);
    printf("Number of sets bits =%d\n",countsetsbits(num));
    return 0;
}