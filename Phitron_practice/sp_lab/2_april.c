#include <stdio.h>

// Enque and deque

int first = 0, last = 0;

void enqueue(int queue[], int value)
{
    queue[last] = value;
    last++;
}

void front(int queue[])
{
    // print the first vlaue of the queuent
    printf("%d", queue[first]);
}

void back(int queue[])
{
    // print the last value of the queue
    printf("%d", queue[last - 1]);
}
// void dequeue(int queue[])
// {
//     if (first == last)
//     {
//         printf("Queue is empty\n");
//     }
//     first++;
// }
void dequeue(int queue[])
{
    if (first == last)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = 0; i < last - 1; i++)
        {
            queue[i] = queue[i + 1];
        }
        last--;
    }
}

void print_queue(int queue[])
{
    printf("Queue: ");
    for (int i = first; i < last; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int n, value;
    printf("Enter size of queue: ");
    scanf("%d", &n);
    int queue[n];
    enqueue(queue, 5);
    enqueue(queue, 9);
    enqueue(queue, 2);
    // peek(queue);
    front(queue);
    back(queue);
}