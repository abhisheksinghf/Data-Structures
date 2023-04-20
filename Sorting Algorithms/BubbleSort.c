#include <stdio.h>

void printArr(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void bubbleSort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) //for number of passes
    {
        printf("\nWorking on pass no %d \n", i + 1);
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSortAdaptive(int *arr, int n)
{
    int i, j, temp;
    int isSorted = 0;
    for (i = 0; i < n - 1; i++) //for number of passes
    {
        printf("\nWorking on pass no %d \n", i + 1);
        isSorted = 1;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int arr[] = {12, 40, 65, 7, 23, 9};
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printf("\nArray Before Sorting : \n");
    printArr(arr, n);
    bubbleSort(arr, n);
    printf("\nArray After Sorting : \n");
    printArr(arr, n);

    return 0;
    
}