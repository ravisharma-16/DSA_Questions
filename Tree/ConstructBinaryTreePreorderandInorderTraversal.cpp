// leetcode no = 105
// Construct Binary Tree from Preorder and Inorder Traversal
#include <iostream>
#include <vector>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
int find(vector<int> &in, int element)
{
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] == element)
        {
            return i;
        }
    }
    return -1;
}
TreeNode *solve(vector<int> &pre, vector<int> &in, int &index, int inorderstart, int inorderend, int n)
{
    if (index >= n || inorderstart > inorderend)
    {
        return NULL;
    }

    int element = pre[index++];
    TreeNode *root = new TreeNode(element);
    int position = find(in, element);

    root->left = solve(pre, in, index, inorderstart, position - 1, n);
    root->right = solve(pre, in, index, position + 1, inorderend, n);

    return root;
}
TreeNode *buildTree(vector<int> &pre, vector<int> &in)
{
    if (pre.empty() || in.empty())
    {
        return NULL;
    }

    int preindex = 0;
    return solve(pre, in, preindex, 0, in.size() - 1, in.size());
}
void print(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
int main()
{
    vector<int> pre = {1, 2, 4, 5, 3};
    vector<int> in = {4, 2, 5, 1, 3};
    TreeNode *root = buildTree(pre, in);
    print(root);
    return 0;
}