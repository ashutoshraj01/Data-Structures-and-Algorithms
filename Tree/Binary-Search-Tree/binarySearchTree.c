#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root = NULL;

void appendNode()
{
    int data;
    struct Node *t, *p;
    t = (struct Node *)malloc(sizeof(struct Node));
    printf("\n\tEnter the data: ");
    scanf("%d", &data);
    t->data = data;
    t->left = NULL;
    t->right = NULL;
    p = root;
    if (root == NULL)
    {
        root = t;
    }
    else
    {
        struct Node *curr;
        curr = root;

        while (curr)
        {
            p = curr;
            if (t->data > curr->data)
            {
                curr = curr->right;
            }else{
                curr = curr->left;
            }
        }
        if(t->data > p->data){
            p->right = t;
        }else{
            p->left = t;
        }
    }
    printf("\n\t\t%d inserted successfully\n\n",data);
}

void deleteNode() {}

void traverseTree()
{
}

void findLength() {}

int main()
{
    int ch;
    printf("\n\t\t*****  BINARY SEARCH TREE ****\n\n");
    while (1)
    {
        printf("\t>>>>>>>> Choose the operation you want to perform  <<<<<<<<<\n");
        printf("1. Append \n");
        printf("2. Find the length\n");
        printf("3. Traverse the Whole tree\n");
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
            traverseTree();
            break;
        case 4:
            deleteNode();
            break;
        case 5:
            printf("\n\n\t\tProgram terminated successfully!\n\n");
            exit(1);
            break;
        default:
            printf("\n\t\tInvalid Input!, Try again.\n\n");
        }
    }
    return 0;
}