#include <stdio.h>

void printArray(int *A, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}

void mergeSort(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}
void mergeSortRecursive(int A[], int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = (low + high) / 2;
        mergeSortRecursive(A, low, mid);
        mergeSortRecursive(A, mid + 1, high);
        mergeSort(A, mid, low, high);
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9, 21};
    int n = 6;
    printf("Unsorted Array : \n");
    printArray(A, n);
    mergeSortRecursive(A, 0, 6);
    printf("Sorted Array : \n");
    printArray(A, n);
    return 0;
}
