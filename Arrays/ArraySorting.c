#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        int arr[100];
        int size,i,j;
        printf("Enter the size of an Array : ");
        scanf("%d",&size);
        for(i=0;i<size;i++)
        {
            printf("Enter Element[%d] : ",i);
            scanf("%d",&arr[i]);
        }
        printf("\n\t--Orignal Array--\n");
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
        int temp;
        for(i=0;i<size-1;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;    
                }
            }
        }
        printf("\n\t--Assending Order--\n");
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n\t--Descending Order--\n");
        for(i=size-1;i>=0;i--)
        {
            printf("%d\t",arr[i]);
        }
        return 0;
    }