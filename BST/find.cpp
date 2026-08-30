#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        return root = new node(data);
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void create(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insert(root, data);
        cin >> data;
    }
}

bool find(node *root,int data)
{
    if (root == NULL)
    {
        cout << "not found" << endl;
        return false;
    }
    if (root->data == data)
    {
        cout << "found" << endl;
        return true;
    }
    if (data < root->data)
    {
        find(root->left, data);
    }
    else
    {
        find(root->right, data);
    }
}

bool find2(node *root,int d)
{
    node *temp = root;
    while(temp != NULL)
    {
        if(temp->data == d)
        {
            cout << "found" << endl;
            return true;
        }
        if(d < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
}

int main()
{
    node *root = NULL;
    cout << "enter the data = ";
    create(root);
    cout << "enter the data to find = ";
    int data;
    cin >> data;
    find(root, data);
}

