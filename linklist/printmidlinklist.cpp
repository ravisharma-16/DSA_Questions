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

// node *midnum(node *&head)
// {
//         // node *temp = head;
//         // int mid = lenght / 2;
//         // int count = 0;
//         // while (count < mid)
//         // {
//         //     temp = temp->next;
//         //     count++;
//         // }
//         // cout << temp->data;
//         node *slow = head;
//         node *fast = head->next;
//         if(head == NULL || head->next == NULL)
//         {
//             return head;
//         }
//         while(fast != NULL)
//         {
//             fast = fast ->next;
//             if(fast != NULL)
//             {
//                 fast = fast ->next;
//             }
//             slow = slow ->next;
//         }
//         return slow;
//  }

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
//     cout << "original link list = ";
//     tailnum(tail, 4);
//     tailnum(tail, 7);
//     tailnum(tail, 20);
//     tailnum(tail, 30);
//     print(head);
//     cout << midnum(head)->data;
// }

