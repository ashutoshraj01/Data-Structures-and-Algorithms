// This file contains stack operations - push, pop, traverse, peek

#include <stdio.h>
#include <stdbool.h>
int top = -1;
int stack[5];

bool isStackFull(int top)
{
    if (top >= 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isStackEmpty(int top)
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push()
{
    bool stackFull = isStackFull(top);
    if (stackFull)
    {
        printf("\n\tStack is already full, Try to pop first\n\n");
    }
    else
    {
        printf("\n\tEnter the number to be pushed: ");
        int no = 0;
        scanf("%d", &no);
        top++;
        stack[top] = no;
        printf("\t%d pushed into stack successfully!\n\n", no);
    }
}

void pop()
{
    bool isstackEmpty = isStackEmpty(top);
    if (isstackEmpty)
    {
        printf("\n\n\tStack is Empty!\n");
    }
    else
    {
        printf("\n\t%d  popped of stack successfully!\n",stack[top]);
        top--;
    }   
}

void peek(int top)  // return the top element of the stack
{
    bool isstackEmpty = isStackEmpty(top);
    if (isstackEmpty)
    {
        printf("\n\n\tStack is Empty!\n");
    }
    else
    {
        printf("\n\tThe top element of the stack is :- %d\n",stack[top]);
    }

}

void traverse(int top)
{
    bool isstackEmpty = isStackEmpty(top);
    if (isstackEmpty)
    {
        printf("\n\n\tStack is Empty!\n");
    }
    else
    {
        printf("\n\tElements of stack are:- "); 
        for (int i = top; i > -1; i--)
        {  
            printf("\n\t\t%d\n",stack[i]);
        }
    }
}

int main()
{

    printf("\t~~~~~~~~~~~~~~~~~ STACK OPERATIONS ~~~~~~~~~~~~~~~~~\n");
    printf("The stack used here is of size 5 \n");

    int continueOperations = 1;
    while (continueOperations)
    {

        printf("\n\nChoose the operation you want to perform\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("Enter Your Choice(in numbers) : ");
        char ch;
        scanf("%ch", &ch);
 
        switch (ch)
        {
        case '1':
            push();
            break;

        case '2':
            pop();
            break;

        case '3':
            peek(top);
            break;

        case '4':
            traverse(top);
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