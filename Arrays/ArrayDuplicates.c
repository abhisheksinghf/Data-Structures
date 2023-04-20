#include<stdio.h>
int main()
{
    int arr[] = {10,20,20,40,10,11,11};
    int size = 6;
    int i,j;
    int temp = 0;
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("\n%d\t",arr[i]);
            }
        }
        
    }

    
    return 0;
}