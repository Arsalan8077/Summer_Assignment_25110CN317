#include<stdio.h>
int main()
{
    int arr[]= {1,2,3,5,6,};
    int n=6;//total number of elements should be 1 to 6
    int sum=0;//calculate the sum of array elemnts
    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i];//sum of first n natural numbers
    }
    int total=n*(n+1)/2;//missing number 
    printf("Missing number is %d",total-sum);
    return 0;
}