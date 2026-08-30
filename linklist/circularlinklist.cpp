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

void deletenode(node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "list is empty";
        return;
    }
    else
    {
        node *prev = tail;
        node *current = prev->next;
        while (current->data != value)
        {
            prev = current;
            current = current->next;
        }
        if (current == prev)
        {
            tail = NULL;
        }
        else if (current == tail)
        {
            prev->next = current->next;
            tail = prev;
        }
        else
        {
            prev->next = current->next;
        }
        current->next = NULL;
        delete current;
    }
}

void middlenum(node *&tail, int data)
{
    node *temp = new node(data);
    temp->next = tail->next->next;
    tail->next->next = temp;
}

//      insertation number in find
void addnum(node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        node *node1 = new node(data);
        tail = node1;
        node1->next = node1;
    }
    else
    {
        node *current = tail;
        while (element != current->data)
        {
            current = current->next;
        }
        node *temp = new node(data);
        temp->next = current->next;
        current->next = temp;
    }
}

void tailnum(node *&tail, int data)
{
    node *value = new node(data);
    if (tail == NULL)
    {
        tail = value;
        value->next = value;
    }
    else
    {
        value->next = tail->next;
        tail->next = value;
        tail = value;
    }
}

void print(node *tail)
{
    if (tail == NULL)
    {
        cout << "khali hai";
        return;
    }
    node *temp = tail->next;
    while (true)
    {
        cout << temp->data << " ";
        temp = temp->next;
        if (temp == tail->next)
        {
            break;
        }
    }
    cout << endl;
}

int main()
{
    // node *node1 = new node(10);
    node *tail = NULL;
    // tail->next = tail;
    tailnum(tail, 2);
    print(tail);
    tailnum(tail, 4);
    print(tail);
    middlenum(tail,3);
    print(tail);
    addnum(tail,2,8);
    print(tail);
    addnum(tail,4,7);
    print(tail);
    deletenode(tail, 4);
    print(tail);
}