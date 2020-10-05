#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct queue
{
    int queue_array[MAX];
    int rear;
    int front;
}q;

int main()
{
    q.front=-1;
    q.rear=-1;

    enqueue(10);
    display();

}

int enqueue(int item)
{

    if (q.rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {

        if (q.front == - 1)
        /*If queue is initially empty */
        q.front = 0;
        q.rear = q.rear + 1;
       item = q.queue_array[q.rear]  ;
    }
}

void dequeue()
{
    if (q.front == - 1 || q.front > q.rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", q.queue_array[q.front]);
        q.front = q.front + 1;
    }
}
void display()
{
    int i;
    if (q.front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \t");
        for (i = q.front; i <= q.rear; i++)
            printf("%d ", q.queue_array[i]);
        printf("\n");
    }
}
