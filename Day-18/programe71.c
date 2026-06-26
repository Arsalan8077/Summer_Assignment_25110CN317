#include<stdio.h>
int main()
{
    int a[]={2,4,6,8,10},n=5;
    int key=8,low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("Element found at index %d",mid);
            break;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    printf("Element not found");
    return 0;
}