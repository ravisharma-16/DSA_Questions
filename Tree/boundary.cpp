#include <iostream>
#include <queue>
#include <vector>
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

void leftside(node *root, vector<int>&ans)
{
    if(root == NULL || root->left == NULL && root->right == NULL)
    {
        return ;
    }
    ans.push_back(root->data);
    if(root->left)
    {
        leftside(root->left,ans);
    }
    else
    {
        leftside(root->right,ans);
    }
}

void leafnode(node *root, vector<int>&ans)
{
    if(root == NULL)
    {
        return;
    }
    if(root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    leafnode(root->left,ans);
    leafnode(root->right,ans);
}

void rightside(node *root, vector<int>&ans)
{
    if(root == NULL || root->left == NULL && root->right == NULL)
    {
        return ;
    }
    if(root->right)
    {
        rightside(root->right,ans);
    }
    else
    {
        rightside(root->left,ans);
    }
    ans.push_back(root->data);
}

vector<int> boundary(node *root)
{
   vector<int>ans;
   if(root == NULL)
   {
    return ans;
   }
   ans.push_back(root->data);

   leftside(root->left,ans);

   leafnode(root->left,ans);
   leafnode(root->right,ans);

   rightside(root->right,ans);
   return ans;
}

node *inputtree(node *root)
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "enter the left child of " << data << endl;
    root->left = inputtree(root->left);
    cout << "enter the right child of " << data << endl;
    root->right = inputtree(root->right);
    return root;
}

int main()
{
    node *root = NULL;
    cout << "enter the data = ";
    root = inputtree(root);
    vector<int> ans;
    ans = boundary(root);
    cout <<"print boundary = ";
    for (auto a : ans)
    {
        cout << a << " ";
    }
}

// 3,9,-1,-1,20,15,-1,-1,7,-1,-1
