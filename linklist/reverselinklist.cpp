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

// node *revernum3(node *&head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }

//     node *chotabhai = revernum3(head->next);
//     head->next->next = head;
//     head ->next = NULL; 
//     return chotabhai;
// }

//     void revernum2(node *current, node *prev, node *&head)
// {
//     if (current == NULL)
//     {
//         head = prev;
//         return;
//     }

//     node *next = current->next;
//     current->next = prev;
//     revernum2(next, current, head);
// }


// void tailnum(node *&tail, int num)
// {
//     node *temp = new node(num);
//     tail->next = temp;
//     tail = temp;
// }

// int getlen(node *head)
// {
//     node *temp = head;
//     int len = 0;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// void reversenum(node *&head)
// {
//     node *prev = NULL;
//     node *current = head;
//     node *next = NULL;

//     while (current != NULL)
//     {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     head = prev;
// }

// void print(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     node *node1 = new node(10);
//     node *tail = node1;
//     node *head = node1;
//     node *prev = NULL;
//     cout << "original link list = ";
//     tailnum(tail, 4);
//     tailnum(tail, 7);
//     print(head);
//     cout << "reverse link list = ";
//     head = revernum3(head);
//     print(head);
//     // revernum2(head, prev, head);
//     // print(head);
//     // reversenum(head);
//     // print(head);
// }


//   double link list reverse


#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void reversenum(node *&head)
{
    node *current = head;
    node *previous = NULL;

    while(current != NULL)
    {
        previous  = current->prev;
        current->prev = current->next;
        current->next = previous ;
        current = current->prev;

    }
    if(previous  != NULL)
    {
    head = previous ->prev;
    }

}
void addnum(node *&tail, int data)
{
    if (tail == NULL)
    {
        node *temp = new node(data);
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    
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

int main()
{
    node *tail = NULL;
    node *head = NULL;
    addnum(tail, 20);
    head = tail;
    addnum(tail, 30);
    addnum(tail, 40);
    addnum(tail, 50);
    addnum(tail, 60);
    cout <<"reverse double linklist = ";
    reversenum(head);
    print(head);
}