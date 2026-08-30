#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlen(node *head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}


void insertnum(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void inserttail(node *&tail, node *&head, int data)
{
    if (tail == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertmiddle(node *&head, node *&tail, int position, int num)
{
    if (position == 1)
    {
        insertnum(head, tail, num);
        return;
    }

    node *temp = head;
    int count = 1;

    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    node *newnode = new node(num);
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
}

void deletenum(node *&head, node *&tail, int position)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        head ->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *current = head;
        node *pre = head;
        int count = 1;
        while (count < position)
        {
            pre = current;
            current = current->next;
            count++;
        }
        current->next = NULL;
        pre->next = current->next;
        current->prev = NULL;
        if (current->next == NULL)
        {
            tail = pre;
        }
        delete current;
    }
}

int main()
{
    // node *node1 = new node(10);
    node *head = NULL;
    node *tail = NULL;

    insertnum(head, tail, 22);
    print(head);



    inserttail(tail, head, 45);
    print(head);
    inserttail(tail, head, 55);
    print(head);
    inserttail(tail, head, 77);
    print(head);



    insertmiddle(head, tail, 4, 88);
    cout << "lenght of = " << getlen(head) << endl;
    deletenum(head, tail, 1);
    print(head);

    cout << "lenght of = " << getlen(head) << endl;
    cout << head->prev << endl;
    cout << tail->next;
}