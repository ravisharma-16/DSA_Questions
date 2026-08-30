#include<iostream>
using namespace std;
class node
{
public:
int data;
node *left;
node *right;
node(int d)
{
    data = d;
    left = NULL;
    right = NULL;
}
};

pair<int,int>presecc(node *root,int key)
{
    int pre = -1;
    int succ = -1;
    node *temp = root;
    while(temp->data != key)
    {
        if(temp->data > key)
        {
            succ = temp->data;
            temp = temp->left;
        }
        else if(temp->data < key)
        {
            pre = temp->data;
            temp = temp->right;
        }
    }
    if(temp->left != NULL)
    {
        node *t = temp->left;
        while(t->right != NULL)
        {
            t = t->right;
        }
        pre = t->data;
    }
    if(temp->right != NULL)
    {
        node *t = temp->right;
        while(t->left != NULL)
        {
            t = t->left;
        }
        succ = t->data;
    }
    return {pre,succ};
}

void insert(node *&root,int data)
{
   if(root == NULL)
   {
    root = new node(data);
    return;
   }
   if(data < root->data)
   {
    insert(root->left,data);
   }
    else
    {
     insert(root->right,data);
    }
}

void createnode(node *&root)
{
    int data;
    cin >> data;
    while(data != -1)
    {
        insert(root,data);
        cin >> data;
    }
}
int mian() 
{
    node *root = NULL;
    createnode(root);
    cout << "Enter the value to find predecessor and successor: ";
    int val;
    cin >> val;
    pair<int,int>p = presecc(root,val);
    cout << "Predecessor: " << p.first << endl;
    cout << "Successor: " << p.second << endl;
    return 0;
}