#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    float avg;//variable declaration
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);//input size of array
    printf("Enter the elements of the array: ");//input elements of array
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;//calculate average
    printf("The sum of the elements is: %d\n",sum);
    printf("The average of the elements is: %.2f\n",avg);
    return 0;
}               