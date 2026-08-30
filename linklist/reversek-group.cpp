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

void addend(node *&tail, int num)
{
    node *temp = new node(num);
    tail->next = temp;
    tail = temp;
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
int getlen(node *head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

node *kGroups(node *&head,int len,int K)
{
    if(!head)
    return NULL;

    node *prev=NULL;
    node*curr=head;
    node*nextNode=NULL;
  
    int count=1;
    while( curr!=NULL &&count<=K)
    {
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        count++;
    } 

    if(nextNode!=NULL)
    {
       head->next = kGroups(nextNode,len,3);
    }

    return prev;
}
int main()  
{

    node *head = new node(100);
    node *tail = head;

    // print(head);

    addend(tail, 22);
    // print(head);

    addend(tail, 42);
    // print(head);
    addend(tail, 99);
    addend(tail, 82);
    // print(head);
    addend(tail, 54);


    print(head);

    // deletenum(head, tail, 5);
    //  print(head);
    int len = getlen(head);
    head=kGroups(head, len, 3);
    print(head);
    return 0;
}