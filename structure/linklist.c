#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;

node *createnode(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void headnum(node **head,int data)
{
    node *temp = createnode(data);
    temp->next = *head;
    *head = temp;
}

void tailnum(node **tail, int data)
{
    node *temp = createnode(data);
    (*tail)->next = temp;
    *tail = temp;
}

void middnum(node **head,node **tail,int pos,int data)
{
    if(pos == 1)
    {
        headnum(head,data);
        return;
    }
    node *temp = *head;
    int count = 1;
    while(count < pos -1)
    {
        temp = temp->next;
        count++;
    }
    if(temp == NULL)
    {
        tailnum(tail,data);
        return;
    }
    node *newnode = createnode(data);
    newnode->next = temp->next;
    temp->next = newnode;

}

void print(node *tail)
{
    node *temp = tail;
    while (temp != NULL)
    {
        printf("  %d -->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    node *head = createnode(100);
    node *tail = head;
    tailnum(&tail,110);
    tailnum(&tail,120);
    tailnum(&tail,130);
    headnum(&head,99);
    middnum(&head,&tail,6,105);
    print(head);
}