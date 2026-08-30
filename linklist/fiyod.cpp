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

void flyod(node *&head)
{
    node *slow = head;
    node *fast = head;
    bool check = true;
    if (head == NULL || head->next == NULL)
    {
        check = false;
    }
    while (fast != NULL && slow != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            check = true;
            break;
        }
    }
    if (check == true)
    {
        cout << "circular node";
        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        cout << endl
             << "node was connect to loop = "
             << slow->data << endl;
        while (slow != fast->next)
        {
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else
    {
        cout << "not circular node";
    }
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

    addend(tail, 2, num, address);

    addend(tail, 3, num, address);
    addend(tail, 4, num, address);

    addend(tail, 5, num, address);
    addend(tail, 6, num, address);

    flyod(head);
    print(head);
}