#include <stdio.h>

void printArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
void quickSort(int *arr, int low, int high)
{
    int partitionIndex; //Indexof pivot after partition
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);  //sort left sub array
        quickSort(arr, partitionIndex + 1, high); //sort right sub array
    }
}
int main()
{
    int arr[] = {3, 5, 2, 4, 8, 1, 3, 13, 12};
    int n = 9;
    printf("\nUnSorted Array : \n");
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    printf("Sorted Array : \n");
    printArray(arr, n);

    return 0;
}