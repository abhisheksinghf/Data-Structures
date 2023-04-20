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

// void selectionSort(int *arr, int n)
// {
//     int i, j, temp;
//     printf("Running Selection Sort...\n");
//     for (i = 0; i < n - 1; i++)
//     {
//         int indexOfMin = i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[indexOfMin])
//             {
//                 indexOfMin = j;
//             }
//         }
//         temp = arr[i];
//         arr[i] = arr[indexOfMin];
//         arr[indexOfMin] = temp;
//     }
// }

void selectionSort(int *arr, int n)
{
    int i, j, temp, indexOfMin = 0;
    for (i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}
int main()
{

    int arr[] = {19, 5, 1, 13, 12};
    //pass 1: 19 5 1 13 12 --> 1 5 19 13 12 [Bring smallest element first]
    //pass 2: 1 5 19 13 12
    //pass 3: 1 5 19 13 12 --> 1 5 12 13 19
    //pass 4: 1 5 12 13 19

    int n = 5;
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}