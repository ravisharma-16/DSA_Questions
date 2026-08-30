#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *child;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }
};

// Merge two linked lists recursively
node *mergeLL(node *&head1, node *&head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    node *temp = NULL;

    if (head1->data <= head2->data)
    {
        temp = head1;
        temp->next = mergeLL(head1->next, head2);
    }
    else
    {
        temp = head2;
        temp->next = mergeLL(head1, head2->next);
    }

    return temp;
}

// Add a child node
void child(node *&head, int data)
{
    node *temp = new node(data);
    head->child = temp;
    head = temp;
}

// Flatten the list recursively
node *flatten(node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;

    node *right = head->next;
    head->next = NULL;

    node *flattenedRight = flatten(right);

    node *merged = mergeLL(head, flattenedRight);
    return merged;
}

// Add a node to the end of the main list
void addend(node *&tail, node *&head, int num)
{
    node *temp = new node(num);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

// Print the flattened linked list
void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    node *child1 = head;

    // Build the list
    addend(tail, head, 1);
    child(child1, 2);
    child(child1, 3);
    child(child1, 4);
    child(child1, 5);
    child1 = head->next;

    addend(tail, head, 6);
    child(child1, 7);
    child(child1, 8);
    child(child1, 9);
    child1 = head->next->next;

    addend(tail, head, 10);
    child(child1, 11);
    child(child1, 12);

    addend(tail, head, 13);
    addend(tail, head, 14);
    addend(tail, head, 15);

    cout << "Original linked list: ";
    printList(head); // Print the main list

    node *flattenedList = flatten(head);
    cout << "Flattened linked list: ";
    printList(flattenedList); // Print the flattened list

    return 0;
}
