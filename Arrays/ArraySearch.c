//Searching an Element in an array
#include<stdio.h>

    int main()
    {
        int arr[100],size;
        int tosearch,i,count=0;
        printf("Enter the size of the array : ");
        scanf("%d",&size);
        for(i=0;i<size;i++){
            printf("Enter Element %d : ",i);
            scanf("%d",&arr[i]);
        }
        printf("Enter a Element you wanna Search : ");
        scanf("%d",&tosearch);
        for(i=0;i<size;i++){
            if(tosearch==arr[i]){
                count++;
            }
        }
        if(count==1){
            printf("Element Found %d!",tosearch);
        }
        else
        printf("Element %d Not Found !",tosearch);
        return 0;
    }