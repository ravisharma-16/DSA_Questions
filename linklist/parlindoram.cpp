// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// bool par(node *&head)
// {
//     node *temp = head;
//     int len = 0;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     int arr[len];
//     temp = head;
//     int i = 0;
//     while (temp != NULL)
//     {
//         arr[i] = temp->data;
//         i++;
//         temp = temp->next;
//     }
//     int j = len - 1;
//     for (int i = 0; i < len / 2; i++)
//     {
//         if (arr[i] != arr[j])
//         {
//             return false;
//         }
//         j--;
//     }
//     return true;
// }

// void print(node *&head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
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

// void tailnum(node *&tail, int data)
// {
//     node *temp = new node(data);
//     if (tail != NULL)
//     {
//         tail->next = temp;
//     }
//     tail = temp;
// }

// int main()
// {
//     node *tail = new node(1);
//     node *head = NULL;
//     tailnum(tail, 2);
//     head = tail;
//     tailnum(tail, 3);
//     tailnum(tail, 2);
//     tailnum(tail, 1);
//     print(head);
//     if(par(head))
//     {
//       cout << "parlindoram";
//     }
//     else
//     {
//         cout << "not parlindoram";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int a)
    {
        val = a;
        next = NULL;
    }
};

node *middle(node *head)
{
    node *prev = head;
    node *current = head;
    while (current->next != NULL)
    {
        prev = prev->next;
        current = current->next->next;
    }
    return prev;
}

node *reverse(node *head)
{
    node *prev = NULL;
    node *current = middle(head);
    while (current != NULL)
    {
        node *temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
}

bool isPalindrome(node *head)
{
    // 1 2 3 1 2
    node *check = reverse(head);
    node *temp = head;
    while (check != NULL)
    {
        if (temp->val != check->val)
        {
            return false;
        }
        check = check->next;
        temp = temp->next;
    }
    return true;
}

int main()
{
    node *head = new node(1);
    node *tail = head;
    tail->next = new node(2);
    tail = tail->next;
    tail->next = new node(3);
    tail = tail->next;
    tail->next = new node(2);
    tail = tail->next;
    tail->next = new node(1);
    tail = tail->next;
    if (isPalindrome(head))
    {
        cout << "parlindoram";
    }
    else
    {
        cout << "not parlindoram";
    }
    return 0;
}