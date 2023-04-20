//inserting an element in an array
#include <stdio.h>
#include <stdlib.h>

void displayArray(int size, int *arr)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Element %d is %d\n", i, arr[i]);
    }
}
void arrayInsert(int *arr, int size, int pos, int insert)
{
    int i;
    if (pos > size)
    {
        printf(" Error ! Array Out of Bound ");
        exit(0);
    }
    for (i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = insert;
    size++;

    displayArray(size, arr);
}
int main()
{
    int arr[100];
    int insert, size, i, pos;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter Element %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the Element you wanna INSERT : ");
    scanf("%d", &insert);

    printf("Enter Position to Insert : ");
    scanf("%d", &pos);

    arrayInsert(arr, size, pos, insert);

    return 0;
}