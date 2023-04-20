#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        int arr[100];
        int i,size;
        printf("Enter the size of an Array : ");
        scanf("%d",&size);
        for(i=0;i<size;i++)
        {
            printf("Enter Element[%d] : ",i);
            scanf("%d",&arr[i]);
        }
        printf("\n--Orignal Array--\n");
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n--Reversed Array--\n");
        for(i=size-1;i>=0;i--)
        {
            printf("%d\t",arr[i]);
        }
        return 0;
    }