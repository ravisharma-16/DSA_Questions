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

void headnum(node *&head, int num)
{
    node *temp = new node(num);
    temp->next = head;
    head = temp;
}

void addend(node *&tail, int num)
{
    node *temp = new node(num);
    tail->next = temp;
    tail = temp;
}

void removeduplicate(node *&head)
{
    node *current = head;
    while (current != NULL && current->next != NULL)
    {
        node *temp = current; // 1 2 3 3 4 4 5
        node *forword = current->next;
        while (forword != NULL)
        {
            if (current->data == forword->data)
            {
                node *ravi = forword;
                temp->next = forword->next;
                delete ravi;
                forword = temp->next;
            }
            else
            {
                temp = forword;
                forword = forword->next;
            }
        }
        current = current->next;
    }
}


void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    node *head = new node(1);
    node *tail = head;

    addend(tail, 2);
    addend(tail, 3);
    addend(tail, 1);
    addend(tail, 4);

    cout <<"Remove Duplicate number in linklist "<<endl;
    removeduplicate(head);
    print(head);

    return 0;
}