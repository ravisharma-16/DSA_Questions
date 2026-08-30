// #include<iostream>
// using namespace std;
// class node
// {
//   public:
//   int data;
//   node *next;
//   node(int data)
//   {
//      this->data = data;
//      this->next = NULL;
//   }

// };
// int main()
// {
//     node *ravi = new node(100);
//     // node ravi(20);
//     // cout << ravi.data<<endl;
//     //  cout << ravi.next<<endl;
//      cout << ravi->data<<endl;
//      cout << ravi->next<<endl;
// }

// #include <iostream>
// using namespace std;
// class node
// {
// public:
//   int data;
//   node *next;
//   node(int data)
//   {
//     this->data = data;
//     this->next = NULL;
//   }
//   void addnum(node *&head, int num)
//   {
//     node *temp = new node(num);     //    76 45 22 100
//     temp->next = head;
//     head = temp;
//   }
//   void print(node *&head)
//   {
//     node *temp = head;
//     while (temp != NULL)
//     {
//       cout << temp->data << " ";
//       temp = temp->next;
//     }
//     cout << endl;
//   }
// };
// int main()
// {
//   node *ravi = new node(100);
//   ravi->print(ravi);
//   ravi->addnum(ravi, 22);
//   ravi->print(ravi);
//   ravi->addnum(ravi, 45);
//   ravi->print(ravi);
//   ravi->addnum(ravi, 76);
//   ravi->print(ravi);
// }

// #include <iostream>
// using namespace std;
// class node
// {
// public:
//   int data;
//   node *next;
//   node(int data)
//   {
//     this->data = data;
//     this->next = NULL;
//   }

//   void addend(node *&tail, int num)
//   {
//     node *temp = new node(num);
//     tail->next = temp;
//     tail = tail ->next;
//   }
//   void print(node *&head)
//   {
//     node *temp = head;
//     while (temp != NULL)
//     {
//       cout << temp->data << " ";     //   100 22 42
//       temp = temp->next;
//     }
//     cout << endl;
//   }
// };
// int main()
// {
//   node *ravi = new node(100);
//   node *tail = ravi;
//   ravi->print(ravi);
//   ravi->addend(tail, 22);
//   ravi->print(ravi);
//   ravi->addend(tail, 42);
//   ravi->print(ravi);
// }

//   add middle of the linklist

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node *next;

//     node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     void headnum(node *&head, int num) {
//         node *temp = new node(num);
//         temp->next = head;
//         head = temp;
//     }

//     void addend(node *&tail, int num) {
//         node *temp = new node(num);
//         tail->next = temp;
//         tail = temp;
//     }

//     void insertmiddle(node *&head, int position, int num) {
//         if (position == 1) {
//             headnum(head, num);
//             return;
//         }

//         node *temp = head;
//         int count = 1;

//         while (temp != NULL && count < position - 1) {
//             temp = temp->next;
//             count++;
//         }

//         if (temp == NULL) {
//             cout << "Position out of bounds!" << endl;
//             return;
//         }

//         node *newnode = new node(num);
//     newnode->next = temp->next;
//         temp->next = newnode;
//     }

//     void print(node *head) {
//         node *temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {

//     node *head = new node(100);
//     node *tail = head;

//     head->print(head);

//     head->addend(tail, 22);
//     head->print(head);

//     head->addend(tail, 42);
//     head->print(head);

//     head->addend(tail, 82);
//     head->print(head);

//     head->insertmiddle(head, 2, 76);
//     head->print(head);

//     return 0;
// }

// deleting

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

// void headnum(node *&head, int num)
// {
//     node *temp = new node(num);
//     temp->next = head;
//     head = temp;
// }

// void addend(node *&tail, int num)
// {
//     node *temp = new node(num);
//     tail->next = temp;
//     tail = temp;
// }

// void insertmiddle(node *&head, int position, int num)
// {
//     if (position == 1)
//     {
//         headnum(head, num);
//         return;
//     }

//     node *temp = head;
//     int count = 1;

//     while (temp != NULL && count < position - 1)
//     {
//         temp = temp->next;
//         count++;
//     }

//     if (temp == NULL)
//     {
//         cout << "Position out of bounds!" << endl;
//         return;
//     }

//     node *newnode = new node(num);
//     newnode->next = temp->next;
//     temp->next = newnode;
// }

// void deletenum(node *&head, node *&tail, int position)
// {

//     if (position == 1)
//     {
//         node *temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         node *current = head;
//         node *pre = head;
//         int count = 1;
//         while (count < position)
//         {
//             pre = current;
//             current = current->next;
//             count++;
//         }
//         pre->next = current->next;
//         if (current->next == NULL)
//         {
//             tail = pre;
//         }
//         delete current;
//     }
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

//     node *head = new node(100);
//     node *tail = head;

//     print(head);

//     addend(tail, 22);
//     print(head);

//     addend(tail, 42);
//     print(head);

//     addend(tail, 82);
//     print(head);

//     insertmiddle(head, 2, 76);
//     print(head);

//     deletenum(head, tail, 5);
//     print(head);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void tailnum(Node *&head, Node *&tail, int data)
// {
//     Node *newNode = new Node(data);
//     if (tail != NULL)
//     {
//         tail->next = newNode;
//     }
//     tail = newNode;
//     if (head == NULL)
//     {
//         head = tail;
//     }
// }

// void headnum(Node *&head, int d)
// {
//     Node *newNode = new Node(d);
//     if (head != NULL)
//     {
//         newNode->next = head;
//     }
//     head = newNode;
// }

// void reverseList(Node *&head, Node *&tail)
// {
//     Node *prev = NULL;
//     Node *current = head;
//     tail = head;
//     while (current != NULL)
//     {
//         Node *nextNode = current->next;
//         current->next = prev;
//         prev = current;
//         current = nextNode;
//     }
//     head = prev;
// }

// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int size, value;
//     cout << "Enter the size of the linked list: ";
//     cin >> size;

//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter value: ";
//         cin >> value;
//         tailnum(head, tail, value);
//     }

//     cout << "Original List: ";
//     printList(head);

//     reverseList(head, tail);

//     cout << "Reversed List: ";
//     printList(head);

//     return 0;
// }


// dummy data

#include<iostream>
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

node *inserttotail(node *&head,node *&tail,int data)
{
    node *newnode = new node(data);
    if(tail != NULL)
    {
        tail->next = newnode;
    }
    tail = newnode;
    if(head == NULL)
    {
        head = tail;
    }
    return tail;
}
void print(node **head)
{
    node *current = *head;
    while(current)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    cout <<endl;
}
node *createCopy(node *&originalHead) {
    node sandesh(0); 
    node* temp = &sandesh;
    
    while(originalHead) {
        temp->next = new node(originalHead->data);  
        temp = temp->next;
        originalHead = originalHead->next;
    }
    return sandesh.next; 
}

int main()
{
    node *tail = NULL;
    node *head = NULL;
    cout << "enter the linklist value -> ";
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int val;
        cout <<"value ---- ";
        cin >> val;
        tail = inserttotail(head,tail,val);
    }
    cout <<"printing Data --- ";
    print(&head);
    node *sandesh = createCopy(head);
    print(&sandesh);
}