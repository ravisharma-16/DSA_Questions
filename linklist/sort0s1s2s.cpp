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

// node *sortnum(node *&head)
// {
//     node *temp = head;
//     int zerocount = 0;
//     int oneocount = 0;
//     int twocount = 0;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zerocount++;
//         }
//         else if (temp->data == 1)
//         {
//             oneocount++;
//         }
//         else
//         {
//             twocount++;
//         }
//         temp = temp->next;
//     }
//     temp = head;
//     while (temp != NULL)
//     {
//         if (zerocount != 0)
//         {
//             temp->data = 0;
//             zerocount--;
//         }
//         else if (oneocount != 0)
//         {
//             temp->data = 1;
//             oneocount--;
//         }
//         else
//         {
//             temp->data = 2;
//             twocount--;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

node *sortnum(node *&head)
{
    node *temp = head;
    node *zero = NULL;
    node *one = NULL;
    node *two = NULL;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            headnum(zero, 0);
        }
        else if (temp->data == 1)
        {
            headnum(one, 1);
        }
        else
        {
            headnum(two, 2);
        }
        temp = temp->next;
    }
    temp = zero;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = one;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = two;
    return zero;
}

int main()
{
    node *tail = new node(100);
    node *head = NULL;
    tailnum(tail, 0);
    head = tail;
    tailnum(tail, 2);
    tailnum(tail, 1);
    tailnum(tail, 2);
    tailnum(tail, 1);
    print(head);
    head = sortnum(head);
    print(head);
    return 0;
}
