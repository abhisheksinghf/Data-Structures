#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
}
int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("The Queue is Full!!");
    }
    else
    {
        q->r=q->r+1;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q,int val)
{
    int a = -1;
    if(isEmpty(q))
    {
        printf("The Queue is ");
    }
}
int main()
{
    struct queue q;
    q.size = 108;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    if (isEmpty(&q))
    {
        printf("Queue is Empty!!");
    }
    //Enqueue few elements
    enqueue(&q, 12);
    // enqueue(&q, 15);
    return 0;
}