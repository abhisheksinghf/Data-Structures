#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

printArray(int *A,int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",A[i]);
    }
    
}
maximum(int *A, int n)
{
    int i, max;
    for (i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void CountSort(int *A, int n)
{
    int i, j;
    int max = maximum(A, n);
    int *count = (int *)malloc(max + 1 * sizeof(int));
    for (i = 0; i < n; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }
    i = 0;//counter for count array
    j = 0;//counter for main array
    while (i<=max)
    {
        if(count[i]>0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printf("Unsorted Array : \n");
    printArray(A, n);
    CountSort(A, n);
    printf("Sorted Array : \n");
    printArray(A, n);
    return 0;
}