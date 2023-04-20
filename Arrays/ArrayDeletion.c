#include <stdio.h>
void displayArray(int *arr,int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
void deleteElement(int *arr, int size, int pos)
{
    int i;
    for (i = pos; i <= size; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    displayArray(arr,size);
}
int main()
{
    int arr[] = {10, 21, 42, 89, 30};
    int size = 5;
    int pos;
    printf("Enter position to delete : \n");
    scanf("%d", &pos);
    deleteElement(arr, size, pos);
    return 0;
}