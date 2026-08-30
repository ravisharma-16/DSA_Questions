#include<iostream>
#include<climits>
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

class info
{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info largestBSTUtil(node *root, info &ans)
{
    if (root == NULL)
    {
        return {INT_MIN, INT_MAX, true, 0};
    }
    info left = largestBSTUtil(root->left, ans);
    info right = largestBSTUtil(root->right, ans);
    
    ans.size = left.size + right.size + 1;
    
    if (left.isBST && right.isBST && left.maxi < root->data && right.mini > root->data)
    {
        ans.isBST = true;
        ans.mini = min(left.mini, root->data);
        ans.maxi = max(right.maxi, root->data);
    }
    else
    {
        ans.isBST = false;
        ans.size = max(left.size, right.size);
    }
}

// void largestBSTUtil(node *root, info &ans)
// {
//     if (root == NULL)
//     {
//         ans.maxi = INT_MIN;
//         ans.mini = INT_MAX;
//         ans.isBST = true;
//         ans.size = 0;
//         return;
//     }
    
//     info left, right;
//     largestBSTUtil(root->left, left);
//     largestBSTUtil(root->right, right);
    
//     ans.size = left.size + right.size + 1;
    
//     if (left.isBST && right.isBST && left.maxi < root->data && right.mini > root->data)
//     {
//         ans.isBST = true;
//         ans.mini = min(left.mini, root->data);
//         ans.maxi = max(right.maxi, root->data);
//     }
//     else
//     {
//         ans.isBST = false;
//         ans.size = max(left.size, right.size);
//     }
// }
int largestBST(node *root)
{
    info ans;
    largestBSTUtil(root, ans);
    return ans.size;
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
    root->left = inputtree(root->left);
    root->right = inputtree(root->right);
    return root;
}

int main()
{
    node *root = NULL;
    cout << "Enter the elements of the tree in level order (use -1 for NULL): ";
    root = inputtree(root);
    int largest_bst_size = largestBST(root);
    cout << "Size of the largest BST in the tree: " << largest_bst_size << endl;
    return 0;
}