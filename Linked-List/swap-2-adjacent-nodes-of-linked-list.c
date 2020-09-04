// This code perform CRUD operations using linked list.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *link;
};

struct node *root = NULL; // global variable for node

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

int findLength()
{
    struct node *temp;
    if (root == NULL)
    {
        return 0;
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
        return count;
    }
}

void swapNodes(){
    if(findLength() < 2){
       printf("\n\n\t The List must have atleast 2 nodes.\n\n");
    }else{
        int count = 0 ;
        struct node *p, *q, *r;
        p = root;
        printf("\n\n\tEnter the Element to Swap : ");
        int data = 0;
        scanf("%d", &data);
        printf("\n\t *****  The element you entered will be swapped with the next right element!   ******\n\n");
        
        printf("\np = %d\n",p->data);

        while(p->data != data && p->link != NULL  && p->link->data != data ){
          printf("\nInside = %d\n",p->data);
          p = p->link;
          count++;
        }
         
         printf("\np = %d\n",p->data);  
         printf("/ncount = %d/n",count);

        if(count+2 == findLength()){
            printf("\n\n\t The last element can't be swapped, next adjacent element doesn't exist\n\n");
        }else if(p->data == data){
             q= p->link;
             root = q;
             p->link= q->link;
             q->link = p;
        }else if( p->link->data == data){
             q = p->link;
             r = q->link;
            q->link = r->link;
            r->link = q;
            p->link = r;
        }

    }
}

int main()
{
    int ch;
    printf("--------------------------------Swap nodes of linked list--------------------------------\n");
    while (1)
    {
        printf("\t>>>>>>>> Choose the operation you want to perform  <<<<<<<<<\n");
        printf("1. Append node \n");
        printf("2. Display the linked list\n");
        printf("3. Swap the nodes\n");
        printf("4. Quit\n");
        printf("\tEnter Your choice(in numbers): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            appendNode();
            break;

        case 2:
            displayList();
            break;
        case 3:
            swapNodes();
            break;
        case 4:
            printf("\n\n\t\tProgram terminated successfully!\n\n");
            exit(1);
            break;
        default:
            printf("\t\tInvalid Input!, Try again.\n");
        }
    }

    return 0;
}