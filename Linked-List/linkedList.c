// This code perform CRUD operations using linked list.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;          // will store data
    struct node *link; // will store address of next node
};

struct node *root = NULL; // global variable for node

// append node at start of list
void appendNodeAtStart()
{
    printf("\tEnter the data you wish to append: ");
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node)); // local node
    scanf("%d", &p->data);
    p->link = root;
    root = p;
    printf("\n\t\t%d inserted at start of node\n\n", root->data);
}

// append node at end of list
void appendNodeAtEnd()
{
    printf("\tEnter the data you wish to append: ");
    struct node *p;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node)); // local node
    scanf("%d", &temp->data);
    temp->link = NULL;
    p = root;
    while (p->link != NULL)
    {
        p = p->link;
    }
    p->link = temp;
    printf("\n\t\t%d inserted at last of the node\n\n", temp->data);
}

void appendNodeAtPosition()
{
    printf("\tEnter the data you wish to append: ");
    struct node *p, *temp;
    p = root;
    temp = (struct node *)malloc(sizeof(struct node)); // local node
    scanf("%d", &temp->data);
    temp->link = NULL;
    printf("\tEnter the value after which you wish to append: ");
    int data;
    scanf("%d", &data);
    bool valueExists = false;
    while (p->link != NULL)
    {
        if (p->data == data)
        {
            temp->link = p->link;
            p->link = temp;

            printf("\n\t\t%d inserted  after value %d of the node\n\n", temp->data, data);
            valueExists = true;
            break;
        }
        p = p->link;
    }
    if (!valueExists)
    {
        printf("\n\n\t%d doesn't exist in the list\n\n", data);
    }
}

// Add Node to linked list
void appendNode()
{
    if (root == NULL)
    {
        printf("\tEnter the data you wish to append: ");
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node)); // local node
        scanf("%d", &temp->data);
        temp->link = NULL;
        root = temp;
        printf("\n\tLinked List created with node data %d\n\n", temp->data);
    }
    else
    {
        printf("Pls choose the position you want to insert the data\n");
        printf("\t1. Append node at Beginning\n");
        printf("\t2. Append node at last\n");
        printf("\t3. Append node at certain position\n");
        printf("\tEnter Your choice(in numbers): ");
        int selectedInput = 0;
        scanf("%d", &selectedInput);
        switch (selectedInput)
        {
        case 1:
            appendNodeAtStart();
            break;
        case 2:
            appendNodeAtEnd();
            break;
        case 3:
            appendNodeAtPosition();
            break;
        default:
            printf("\t\tInvalid Input!, Try again.\n");
        };
    }
}

void findLength()
{
    struct node *temp;
    if (root == NULL)
    {
        printf("\n\tLength of the linked list is 0\n\n");
    }
    else
    {
        int count = 0;
        temp = root;
        while (temp != NULL)
        {
            count++;
            temp = temp->link;
        }
        printf("\n\tLength of the linked list is %d\n\n", count);
    }
}
void displayList()
{
    struct node *p;
    p = root;
    if (p == NULL)
    {
        printf("\n\t\tList is empty!\n\n");
    }
    else
    {
        printf("\n\tThe linked list is = ");
        while (p != NULL)
        {
            printf("%d", p->data);
            p = p->link;
            if (p != NULL)
                printf(" --> ");

            
        }
        printf("\n\n");
    }
}

void deleteNode()
{
    if (root == NULL)
    {
        printf("\n\t Linked List is already empty!\n\n");
    }
    else
    {
        printf("\n\n\tEnter the data to be deleted: ");
        struct node *temp;
        temp = root;
        int data = 0;
        scanf("%d", &data);
        bool isValuePresent = false;
        if (temp->link == NULL && temp->data == data)
        { // if only single node present and data is present
            root = NULL;
            printf("\n\t%d deleted successfully! \n\n", data);
            isValuePresent = true;
        }
        else if (temp->link != NULL && temp->data == data)
        { // if multiple node present and data present at start of node
            root = temp->link;
            printf("\n\t%d deleted successfully! \n\n", data);
            isValuePresent = true;
        }
        else
        {
            while (temp->link != NULL)
            {
                if (temp->link->data == data && temp->link->link == NULL)
                {
                    temp->link = NULL;
                    isValuePresent = true;
                    printf("\n\n\t%d deleted successfully!\n\n", data);
                    break;
                }
                else if (temp->link->data == data && temp->link->link != NULL)
                {
                    temp->link = temp->link->link;
                    isValuePresent = true;
                    printf("\n\n\t%d deleted successfully!\n\n", data);
                    break;
                }
                temp = temp->link;
            }
        }
        if (!isValuePresent)
        {
            printf("\n\t%d not found in the list\n\n", data);
        }
    }
}

int main()
{
    int ch;
    printf("--------------------------------Linked List operations--------------------------------\n");
    while (1)
    {
        printf("\t>>>>>>>> Choose the operation you want to perform  <<<<<<<<<\n");
        printf("1. Append node \n");
        printf("2. Find the length of the the linked list\n");
        printf("3. Display the linked list\n");
        printf("4. Delete a node\n");
        printf("5. Quit\n");
        printf("\tEnter Your choice(in numbers): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            appendNode();
            break;
        case 2:
            findLength();
            break;
        case 3:
            displayList();
            break;
        case 4:
            deleteNode();
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