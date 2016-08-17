#include <stdio.h>

struct node
{
    int data;
    struct node *next;
}

struct node *head = NULL;
struct node *current = NULL;

void insertFirst(int data)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data = data;
    link->next = head;
    head = link;
}

struct node* deleteFirst()
{
    struct node *templink = head;
    head = head->next;
    return templink;
}

bool isEmpty()
{
    return head == NULL;
}

void destructor()
{    
    struct node *link = head;
    while(link != NULL)
    {
        struct node *temp = link;
        node = node->next;
        free(temp);
    }
    head = NULL;
}

int main()
{
    struct node *root;
    root = (struct node *) malloc(sizof(struct node));
    root->next = 0;
    root->x = 5;
    free(root);
}
