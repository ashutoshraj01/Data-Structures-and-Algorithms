#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *back;
};

struct node *top = NULL;
void push()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\tEnter the data you want to push: ");
    scanf("%d", &temp->data);
    temp->back = top;
    top = temp;
    printf("\t\t%d inserted into the stack successfully!\n\n", temp->data);
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("\n\tStack is already Empty!\n\n");
    }
    else
    {

        top = top->back;
        printf("\n\t%d is popped successfully!\n\n", temp->data);
        temp->back = NULL;
        free(temp);
    }
}

void sizeOfStack() {
    struct node *temp;
    temp = top;
    int count =0;
    while (temp != NULL){
      count++;
      temp = temp->back;
    }
    printf("\n\t Size of stack : %d\n\n",count);
}

void displayStack()
{
    if (top == NULL)
    {
        printf("\n\tStack is empty!\n\n");
    }
    else
    {
        struct node *temp;
        temp = top;
        printf("\t\t The elements of stack are: ");
        while (temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->back;
            if (temp != NULL)
                printf(" <--- ");
        }
        printf("\n\n");
    }
}

int main()
{
    printf("\n\t\t~~~~~~~~~~~~~~  STACK IMPLEMENTATION SINGLE LINKED LIST  ~~~~~~~~~~~~~~\n\n");

    while (1)
    {
        printf("\t>>>>>>>> Choose the operation you want to perform  <<<<<<<<<\n");
        printf("1. Push \n");
        printf("2. Find the size of the stack\n");
        printf("3. Display all the elements of stack\n");
        printf("4. Pop \n");
        printf("5. Quit\n");
        printf("\tEnter Your choice(in numbers): ");
        int ch = 0;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            sizeOfStack();
            break;

        case 3:
            displayStack();
            break;

        case 4:
            pop();
            break;

        case 5:
            printf("\n\n\t\tProgram terminated successfully!\n\n");
            exit(1);
            break;
        default:
            printf("\t\tInvalid Input!, Try again.\n");
        }
    }

    return 0;
}