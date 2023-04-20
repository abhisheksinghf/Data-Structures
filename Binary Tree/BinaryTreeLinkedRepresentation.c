#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *n; //creating node pointer
    n = (struct node *)malloc(sizeof(struct node));//allocating memory in heap
    n->data = n->data; //set data
    n->left = NULL; //setting left right child to null
    n->right = NULL;//setting left right child to null
    
    return n;
}
int main()
{
    //constructing root node
    // struct node *p;
    // p = (struct node *)malloc(sizeof(struct node));
    // p->left = NULL;
    // p->right = NULL;
    // //constructing second node
    // struct node *p1;
    // p1 = (struct node *)malloc(sizeof(struct node));
    // p1->left = NULL;
    // p1->right = NULL;
    // //constructing third node
    // struct node *p2;
    // p2 = (struct node *)malloc(sizeof(struct node));
    // p2->left = NULL;
    // p2->right = NULL;

    //constructing nodes
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);
   //linking p1 and p2 to p(root)
    p->left = p1;
    p->right = p2;

    return 0;
}