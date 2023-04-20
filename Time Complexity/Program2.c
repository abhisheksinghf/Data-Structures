#include<stdio.h>
void func2(int *arr,int size)
{
    int i,j;//fragment 1 = k2
    for ( i = 0; i < size; i++)//loop from 0 to n
    {
        for ( j = 0; j < size; j++)//loop from 0 to n
        {
            printf("%d\t",arr[i]);
        }
        
    }
    
}
int main()
{
    int arr[] = {10,20,30,40};
    int size = 4;
    func2(arr,size);
    return 0;
}
//Time Complexity Analysis
// k2[n+n+n+n.....+(n-1)n]
// nk2(1+1+1+1+...n times)

// Time Complexity is 0(n^2)
