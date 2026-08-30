#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void morrisTraversal(node *root)
{
    node *current, *predecessor;
    current = root;
    while(current != NULL)
    {
        if(current->left == NULL)
        {
            cout << current->data << " ";
            current = current->right;
        }
        else
        {
            predecessor = current->left;
            while(predecessor->right != NULL && predecessor->right != current)
            {
                predecessor = predecessor->right;
            }
            if(predecessor->right == NULL)
            {
                predecessor->right = current;
                current = current->left;
            }
            else
            {
                predecessor->right = NULL;
                cout << current->data << " ";
                current = current->right;
            }
        }
    }
}

void inorder(node *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

node *input(node *root)
{
    int data;
    cin >> data;
    if(data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "Enter left child of " << data << endl;
    root->left = input(root->left);
    cout << "Enter right child of " << data << endl;
    root->right = input(root->right);
    return root;
}
int main()
{
    node *root = NULL;
    // cout << "Enter data for root node" << endl;
    // root = input(root);
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << "Inorder Traversal of the tree is: " << endl;
    inorder(root);
    cout << endl;
    cout << "Morris Traversal of the tree is: " << endl;
    morrisTraversal(root);
    return 0;
}
