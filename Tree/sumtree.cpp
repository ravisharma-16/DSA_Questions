#include <iostream>
#include<queue>
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

pair<bool, int> issumTREE(node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    pair<bool, int> lefttree = issumTREE(root->left);
    pair<bool, int> righttree = issumTREE(root->right);

    bool leftans = lefttree.first;
    bool rightans = righttree.first;
    bool check = root->data == (lefttree.second + righttree.second);

    pair<bool, int> ans;
    if (leftans && rightans && check)
    {
        ans.first = true;
        ans.second = root->data + lefttree.second + righttree.second;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}

bool isSumTree(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (isSumTree(root->left) && isSumTree(root->right))
    {
        int ls, rs;
        if (root->left == NULL)
        {
            ls = 0;
        }
        else if (root->left->left == NULL && root->left->right == NULL)
        {
            ls = root->left->data;
        }
        else
        {
            ls = 2 * root->left->data;
        }
        if (root->right == NULL)
        {
            rs = 0;
        }
        else if (root->right->left == NULL && root->right->right == NULL)
        {
            rs = root->right->data;
        }
        else
        {
            rs = 2 * root->right->data;
        }
        return root->data == ls + rs;
    }
    return false;
}

void print(node *root)
{
    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
        node *temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}

node *buildTree(node *root)
{
    int d;
    cin >> d;
    root = new node(d);
    if (d == -1)
    {
        return NULL;
    }
    cout << "enter the left child of " << d << endl;
    root->left = buildTree(root->left);
    cout << "enter the right child of " << d << endl;
    root->right = buildTree(root->right);
    return root;
}

int main()
{
    node *root = NULL;
    cout << "enter the root node = ";
    root = buildTree(root);

    cout <<"print";
    print(root);
    cout<<endl;
    
    if (issumTREE(root).first)
    {
        cout << "Yes" <<endl;
    }
    else
    {
        cout << "No"<<endl;
    }

    if(isSumTree(root))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}