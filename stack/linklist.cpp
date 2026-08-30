#include <iostream>
#include <stack>
using namespace std;

struct node {
    int data;
    struct node *link;
};

struct node *top = nullptr;

void push(int value) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->link = top;  // Change 'next' to 'link'
    top = newnode;
}

int main() {
    push(10);
    push(20);
    push(30);
    // Add further operations like displaying the stack or popping elements as needed
}

