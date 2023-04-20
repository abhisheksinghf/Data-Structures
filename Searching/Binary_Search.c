#include<stdio.h>
int loc=0;

binary_search(int a[],int n,int key)
{
    int low,mid,high;
    low = 0;
    high = n-1;
    mid=(low+high)/2;
    while(a[mid]!=key && low<=high)
    {
        if(key < a[mid])
        high = mid-1;

        else{
            low = mid+1;
            mid = (low+high)/2;
        }
    }
    if(key==a[mid])
    {
        loc = mid;
        return 1;
    }
    else
        return 0;
}

int main()
{
    int a[10],key,n,i;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);

    printf("Enter the elements of array : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the element to be searched : \n");
    scanf("%d",&key);

    int check = binary_search(a,n,key);

    if(check)
    printf("Element Found at Location %d!!!",loc);

    else
    printf("Element Not Found!");
    return 0;
}