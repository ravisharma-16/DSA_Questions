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

void tailnum(node *&head, node *&tail, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
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

// node *addnum(node *&head1, node *&head2)
// {
//     node *temp1 = reverse(head1);
//     node *temp2 = reverse(head2);
//     node *head3 = NULL;
//     node *head4 = NULL;
//     int carry = 0;
//     int sum  = 0;
//     while (temp1 != NULL || temp2 != NULL)
//     {
//         sum = 0;
//         if (temp1 != NULL) 
//         {
//             sum += temp1->data;
//             temp1 = temp1->next;
//         }
//         if (temp2 != NULL)
//         {
//             sum += temp2->data;
//             temp2 = temp2->next;
//         }
//         sum += carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         tailnum(head3, head4, sum);
//     }
//     if (carry > 0)
//     {
//         tailnum(head3, head4, carry);
//     }
//     return head3;
// }


// void headnum(node *&head, int num)
// {
//     node *temp = new node(num);
//     if (head != NULL)
//     {
//         temp->next = head;
//     }
//     head = temp;
// }

node *addnum(node *&head1,node *&head2)
{
    node *first = reverse(head1);
    node *second = reverse(head2);
    node *taills = NULL;
    node * headd = NULL;
    int carry = 0;
    while(first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;
        tailnum(headd,taills,digit);
        carry = sum / 10;
        first = first->next;
        second = second->next;
    } 

     while(first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        tailnum(headd,taills,digit);
        carry = sum / 10;
        first = first->next;
    } 

     while(second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;
        tailnum(headd,taills,digit);
        carry = sum / 10;
        second = second->next;
    } 
   while(carry != 0)
    {
        int sum = carry ;
        int digit = sum % 10;
        tailnum(headd,taills,carry);
        carry = sum / 10;
    } 
    return headd;
}

int main()
{
    node *tail = NULL;
    node *tail2 = NULL;
    node *head = NULL;
    node *head2 = NULL;
    node *add = NULL;

    tailnum(head, tail, 9);
    tailnum(head, tail, 5);
    tailnum(head, tail, 5);

    tailnum(head2, tail2, 3);
    tailnum(head2, tail2, 4);
    tailnum(head2, tail2, 5);

    print(head);
    print(head2);
    add = addnum(head, head2);
    add =  reverse(add);
    cout << "Add of two list = ";
    print(add);
    return 0;
}
