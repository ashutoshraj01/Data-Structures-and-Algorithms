// This file contains queue operations - enqueue, dequeue, front, rear.

#include <stdio.h>
#include <stdbool.h>
#define SIZE 10
int queue[SIZE];
int front = 0, rear = 0;

bool isQueueEmpty()
{
    if (front == rear)
        return true;
    else
        return false;
}

bool isQueueFull()
{
    if (rear == SIZE)
        return true;
    else
        return false;
}

void traverse()
{
    if (isQueueEmpty())
    {
        printf("\n\tThe Queue is empty!\n\n");
    }
    else
    {
        printf("\n\n\t The element of queue : ");
        for (int i = front; i < rear; i++)
        {
            printf("%d", queue[i]);
            if (i != rear-1)
            {
                printf(" <-- ");
            }
        }
    }
}

void enqueue()
{
    if (isQueueFull())
    {
        printf("\n\tThe Queue is full!\n\n");
    }
    else
    {
        printf("\n\tEnter the element: ");
        int element;
        scanf("%d", &element);
        queue[rear] = element;
        rear++;
        printf("\n\t%d is inserted in the queue successfully!\n\n", element);
    }
}

void dequeue()
{
    if (isQueueEmpty())
    {
        printf("\n\tThe Queue is empty!\n\n");
    }
    else
    {
        int deletedElement = queue[front];
        for (int i = 0; i < rear -1; i++)
        {
            queue[i] = queue[i + 1];
        }
        rear--;
        printf("\n\t%d is deleted from the queue successfully!\n\n", deletedElement);
    }
}

void frontElement()
{
    if (isQueueEmpty())
    {
        printf("\n\n\tThe Queue is empty!\n\n");
    }
    else
    {
        printf("\n\tThe Front is: %d\n\n", queue[front]);
    }
}

void lastElement()
{
    if (isQueueEmpty())
    {
        printf("\n\n\tThe Queue is empty!\n\n");
    }
    else
    {
        printf("\n\tThe Rear is: %d\n\n", queue[rear-1]);
    }
}

int main()
{

    printf("\t~~~~~~~~~~~~~~~~~ QUEUE OPERATIONS ~~~~~~~~~~~~~~~~~\n");
    printf("The Queue used here is of max size 10 \n");

    int continueOperations = 1;
    while (continueOperations)
    {

        printf("\n\nChoose the operation you want to perform\n");
        printf("1. Enqueue (Adds an item to the queue) \n");
        printf("2. Dequeue (Removes an item from the queue) \n");
        printf("3. Front (Get the front item from queue) \n");
        printf("4. Rear (Get the last item from queue) \n");
        printf("5. Display all element of the queue\n");
        printf("6. Exit\n");
        printf("Enter Your Choice(in numbers) : ");
        char ch;
        scanf("%ch", &ch);

        switch (ch)
        {
        case '1':
            enqueue();
            break;

        case '2':
            dequeue();
            break;

        case '3':
            frontElement();
            break;

        case '4':
            lastElement();
            break;
        case '5':
            traverse();
            break;
        case '6':
            continueOperations = 0;
            printf("\n\n\t\tProgram terminated successfully!\n\n");
            break;

        default:
            printf("You Entered Invalid Option, Try again wisely!");
        }
    }
    return 0;
}
