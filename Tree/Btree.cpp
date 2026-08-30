#include <iostream>
#include <queue>
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

void print(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root) //    LNR
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root) //    NLR
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) //    LRN
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

node *inserttoadd(node *&root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    if (data > root->data)
    {
        root->right = inserttoadd(root->right, data);
    }
    else
    {
        root->left = inserttoadd(root->left, data);
    }
    return root;
}
void inserttobtree(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = inserttoadd(root, data);
        cin >> data;
    }
}

int main()
{
    node *root = NULL;
    cout << "enter the data = ";
    inserttobtree(root);
    cout << "print = " << endl;
    print(root);
    cout << "inorder = ";
    inorder(root);
    cout <<endl<< "postorder = ";
    postorder(root);
    cout <<endl<< "preorder = ";
    preorder(root);
}