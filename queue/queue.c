// This file contains stack operations - push, pop, traverse, peek

#include <stdio.h>
#include <stdbool.h>

void enqueue(){

}

void dequeue(){}

void frontElement(){}

void lastElement(){}


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
        printf("5. Exit\n");
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
            continueOperations = 0;
            printf("\n\t\t\tExited Successfully!\n");
            break;

        default:
            printf("You Entered Invalid Option, Try again wisely!");
        }
    }
    return 0;
}

