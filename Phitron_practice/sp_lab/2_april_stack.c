// 19/03/2023
// Sunday
// stackqueue
#include <stdio.h>
 
void push (int stack[], int value, int *top, int n)
{
    stack[*top] = value;
    *top = *top + 1;
}
 
void pop(int stack[], int *top)
{
    if (*top > 0) 
    {
        (*top)--;
    } 
    else
    {
 
    }
}
 
int peek(int stack[], int top)
{
    if (top > 0) 
    {
        return stack[top - 1];
    } 
    else 
    {
        printf("Stack is empty!\n");
        return -1;
    }
}
 
void printStack(int stack[], int top)
{
    printf("Stack: ");
    for (int i = 0; i < top; i++) {
        printf("%d\n ", stack[i]);
    }
 
}
 
int main()
{
    int n, value, option;
    printf("Enter size of stack\n");
    scanf("%d", &n);
    int stack[n];
    int top = 0;
    while (1)
    {
        printf("What do you want to do in the stack?\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Print all values\n5. Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case (1):
            printf("Enter which value you want to push\n");
            scanf("%d", &value);
            push(stack, value, &top,n);
            break;
        case (2):
            pop(stack, &top);
            break;
        case (3):
            printf("Top of stack: %d\n", peek(stack, top));
            break;
 
        case (4):
            printStack(stack, top);
            break;
        case (5):
            return 0;
 
        }
 
    }
 
 
}