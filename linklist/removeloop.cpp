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

void addend(node *&tail, int num, int check, node *&address)
{
    node *temp = new node(num);
    if (check == temp->data)
    {
        address = temp;
    }
    if (temp->next == NULL)
    {
        temp->next = address;
    }
    tail->next = temp;
    tail = temp;
}

void remove(node *&head, node *&address)
{
    node *temp = head;
    while (true)
    {
        temp = temp->next;
        if (temp->next == address)
        {
            break;
        }
    }
    temp->next = NULL;
}

void insertmiddle(node *&head, int position, int num)
{
    if (position == 1)
    {
        headnum(head, num);
        return;
    }

    node *temp = head;
    int count = 1;

    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        cout << "Position out of bounds!" << endl;
        return;
    }

    node *newnode = new node(num);
    newnode->next = temp->next;
    temp->next = newnode;
}

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

int main()
{

    node *head = new node(1);
    node *tail = head;
    node *address = NULL;
    int num;
    cout << "enter the number to connect node = ";
    cin >> num;

    // print(head);

    addend(tail, 2, num, address);
    // print(head);

    addend(tail, 3, num, address);
    addend(tail, 4, num, address);
    // print(head);

    addend(tail, 5, num, address);
    addend(tail, 6, num, address);
    // print(head);

    // insertmiddle(head, 2, 76);
    //  print(head);
    cout << tail->next << endl;
    remove(head, address);
    print(head);
    cout << tail->next << endl;
}