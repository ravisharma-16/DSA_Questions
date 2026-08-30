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

bool checkcircular(node *&tail) {
    if (tail == NULL) {
        return false; 
    }
    node *temp = tail->next;
    while (temp != NULL && temp != tail) {
        temp = temp->next;
    }
    return (temp == tail);
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
    addnum(tail, 2, 8);
    print(tail);
    addnum(tail, 4, 7); 
    print(tail);

    if (checkcircular(tail))
    {
        cout << "circular node";
    }
    else
    {
        cout << "not circular node";
    }
}