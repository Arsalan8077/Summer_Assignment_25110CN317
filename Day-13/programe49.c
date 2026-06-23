#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);//input size of array
    printf("Enter the elements of the array: ");//input elements of array
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);// display elements of array
    }
    return 0;
}               