// 1 3 7 -1 -1  11 -1 -1 5 17 -1 -1 -1

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

void inputdata(node *&root)
{
    queue<node *> q;
    int data;
    cout << "Enter the root data: ";
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftnode;
        cout << "Enter the left node data for " << temp->data << ": " << endl;
        cin >> leftnode;

        if (leftnode != -1)
        {
            temp->left = new node(leftnode);
            q.push(temp->left);
        }

        int rightnode;
        cout << "Enter the right node data for " << temp->data << ": " << endl;
        cin >> rightnode;

        if (rightnode != -1)
        {
            temp->right = new node(rightnode);
            q.push(temp->right);
        }
    }
}

int inorder(node *root, int &count)
{
    if (root == NULL)
    {
        return 0;
    }
    inorder(root->left, count);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    inorder(root->right, count);
    return count;
}

int main()
{
    node *root = NULL;
    int count = 0;
    inputdata(root);

    cout << "how many leaf root : ";
    cout << inorder(root, count);
}