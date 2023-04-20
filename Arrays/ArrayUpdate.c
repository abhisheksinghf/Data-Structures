#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        int arr[100];
        int i,update,size,pos;
        printf("Enter the size of an Array : ");
        scanf("%d",&size);
        for(i=0;i<size;i++)
        {
            printf("Enter Element %d : ",i);
            scanf("%d",&arr[i]);
        }
        printf("Enter the Position of Element You wanna UPDATE : ");
        scanf("%d",&pos);
        printf("Enter the Element to replace: ");
        scanf("%d",&update);
        for(i=0;i<size;i++)
        {
            arr[pos] = update;
        }
        for(i=0;i<size;i++)
        {
            printf("Element [ %d ] : %d\n",i,arr[i]);
        }

        return 0;
    }