#include<stdio.h>

maxArray(int *arr,int n)
{
    int i,max = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    return max;
}
minArray(int *arr,int n)
{
    int i,min = arr[1];
    for(i=0;i<n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {10,2,4,1,3,11,7};
    int n = 6;
    int min,max = 0;
    max = maxArray(arr,n);
    min = minArray(arr,n);
    printf("Largest Element in Array is %d\n",max);
    printf("Smallest Element in Array is %d",min);
    return 0;
}