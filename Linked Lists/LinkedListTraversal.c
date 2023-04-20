#include<stdio.h>
#include<stdlib.h>

    struct Node{
        int data;
        struct Node * next;
    };
    void linkedListTraversal(struct Node* ptr)
    
    {
        while(ptr!=NULL)
        {
        printf("Element = %d\n",ptr->data);
        ptr=ptr->next;
        }

    }
    int main()  
    {
        struct Node * head;
        struct Node * second;
        struct Node * third;
        struct Node * fourth;
        //allocate memory for nodes in head
        head = (struct Node *) malloc(sizeof(struct Node));
        second = (struct Node *) malloc(sizeof(struct Node));
        third = (struct Node *) malloc(sizeof(struct Node));
        fourth = (struct Node *) malloc(sizeof(struct Node));
        //link 1st and 2nd nodes
        head->data = 5;
        head->next = second;   

        //link 2nd and 3rd nodes
        second->data = 10;
        second->next = third;

        //link 3rd and 4th nodes
        third->data = 30;
        third->next=fourth;

        //terminate
        fourth->data = 50;
        fourth->next = NULL;

        linkedListTraversal(head);
    return 0;
    }