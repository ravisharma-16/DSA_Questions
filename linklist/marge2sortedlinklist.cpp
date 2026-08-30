#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void headnum(node *&head, int num)
{
    node *temp = new node(num);
    if (head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}

void tailnum(node *&tail, int data)
{
    node *temp = new node(data);
    if (tail != NULL)
    {
        tail->next = temp;
    }
    tail = temp;
}

node *mergesort(node *&head, node *&head2)
{
    node *prev = NULL;
    node *current = head;
    node *temp = head2;

    if (head == NULL)
        return head2;
    if (head2 == NULL)
        return head;


    if (current->data <= temp->data) {
        prev = current;
        current = current->next;
    } else {
        head = temp;
        prev = temp;
        temp = temp->next;
    }

    while (current != NULL && temp != NULL)
    {
        if (current->data <= temp->data)
        {
            prev->next = current;
            prev = current;
            current = current->next;
        }
        else
        {
            prev->next = temp;
            prev = temp;
            temp = temp->next;
        }
    }


    if (current != NULL)
        prev->next = current;
    if (temp != NULL)
        prev->next = temp;

    return head;
}


int main()
{
    node *tail = new node(1);
    node *head = NULL;
    node *tail2 = new node(2);
    node *head2 = NULL;

    head = tail;
    head2 = tail2;

    tailnum(tail, 3);
    tailnum(tail, 5);
    print(head);

    tailnum(tail2, 4);
    tailnum(tail2, 5);
    print(head2);

    head = mergesort(head, head2);
    print(head);

    return 0;
}
