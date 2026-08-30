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

node *mid(node *&head)
{
    node *slow = head;
    node *fast = head->next;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast ->next->next;
        slow = slow->next;
    }
    return slow;
}

node *reverse(node *&head)
{
    node *prev = NULL;
    node *current = head;
    node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

bool palindrom(node *&head)
{
    if(head->next == NULL)
    {
        return true;
    }
    node *middlenum = mid(head);
    node *temp = middlenum->next;
    middlenum->next = reverse(temp);
    node *temp1 = head;
    node *temp2 = middlenum->next;
    while(temp2 != NULL)
    {
        if(temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

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

int main()
{
    node *tail = new node(1);
    node *head = NULL;
    head = tail;
    tailnum(tail, 2);
    tailnum(tail, 3);
    tailnum(tail, 2);
    tailnum(tail, 1);
    print(head);
    if(palindrom(head))
    {
      cout << "parlindoram";
    }
    else
    {
        cout << "not parlindoram";
    }
    return 0;
}
