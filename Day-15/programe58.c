#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first=arr[0];//shift elements of the array to the left
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;//place the first element at the last position
    printf("Array after left rotation is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}