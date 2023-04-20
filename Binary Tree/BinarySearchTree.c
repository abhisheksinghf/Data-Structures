#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}
void preOrder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d\t",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t",root->data);
    }
}
void inOrder(struct node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("%d\t",root->data);
        inOrder(root->right);
    }
}
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)   
    {
        if(!isBST(root->left)){
            return 0;
        }
        if (prev!=NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct node *search(struct node* root,int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(key == root->data)
    {
        return root;
    }
    else if(key <root->data)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
//       5
//      / \
//     3   6
//    / \
//   1  4
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // printf("PreOrder Traversal : \n");
    // preOrder(p);
    printf("\nInOrder Traversal : \n");
    inOrder(p);
    // printf("\nPostOrder Traversal : \n");
    // postOrder(p);
    return 0;
}