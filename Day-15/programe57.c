#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);//reverse the array
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("Reversed array is: ");//print the reversed array
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}