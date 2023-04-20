#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10

struct stack
{
    int element[STACK_SIZE];
    int top;
};
// int i;
struct stack s;
void push()
{
    int data;
    if (s.top == STACK_SIZE - 1)
    {
        printf("Stack Overflow!!");
    }
    else
    {
        printf("\nEnter the data to be pushed in the stack : \n");
        scanf("%d", &data);
        s.top++;
        s.element[s.top] = data;
        printf("\n%d Element Pushed in the stack !", data);
    }
}

void pop()
{
    if (s.top == -1)
    {
        printf("Stack Underflow!!\n");
    }
    else
    {
        printf("The Popped Element is %d", s.element[s.top]);
        s.top--;
    }
}
void display()
{
int i;
if(s.top == -1)
{
    printf("Cannot Display.. Stack is Empty!!");
}
else
{
    printf("Stack Contents..: \n");
    int i;
    for (i = 0; i < s.top; i++)
    {
        printf("\t%d",s.element[i]);
    }
}

}
int main()
{
    int ch;
        s.top++;
    while (1)
    {
        printf("\nStack Operation : \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter the choice : \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter a Valid Choice !!\n");
            break;
        }
    }

    return 0;
}