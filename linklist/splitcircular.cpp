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

void print2(node *head)
{
    if (head == NULL)
    {
        cout << "khali hai";
        return;
    }
    node *temp = head;
    while (true)
    {
        cout << temp->data << " ";
        temp = temp->next;
        if (temp == head)
        {
            break;
        }
    }
    cout << endl;
}

void split(node *&head, int len, node *&head2)
{
    node *temp = head;
    int len2 = (len + 1) / 2;
    int count = 1;
    while (count < len2)
    {
        temp = temp->next;
        count++;
    }
    head2 = temp->next;
    temp->next = head;
    node *temp2 = head2;
    while (len2 < len - 1)
    {
        temp2 = temp2->next;
        len2++;
    }
    temp2->next = head2;
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

int getlen(node *tail)
{
    int count = 0;
    node *temp = tail->next;
    while (true)
    {
        temp = temp->next;
        count++;
        if (temp == tail->next)
        {
            break;
        }
    }
    return count;
}

int main()
{
    node *tail = NULL;
    node *head2 = NULL;

    tailnum(tail, 1);
    node *head = tail;
    tailnum(tail, 2);
    tailnum(tail, 3);
    tailnum(tail, 4);
    tailnum(tail, 5);
    tailnum(tail, 6);
    tailnum(tail, 7);
    tailnum(tail, 8);

    cout << "Original List: ";
    print(tail);

    int len = getlen(tail);
    split(head, len, head2);

    cout << "First List ";
    print2(head);

    cout << "Second List ";
    print2(head2);

    return 0;
}
