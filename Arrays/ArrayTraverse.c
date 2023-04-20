//traversing an array
#include<stdio.h>

    int main()
    {
        int arr[10];
        int i;
        for(i=0;i<10;i++){
            printf("Enter Element %d : ",i);
            scanf("%d",&arr[i]);
        }
        for(i=0;i<10;i++){
            printf("Element %d is = %d\n",i,arr[i]);
        }
       
        return 0;
    }