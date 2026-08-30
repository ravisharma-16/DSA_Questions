//  1382. Balance a Binary Search Tree

#include<iostream>
#include<vector>
using namespace std;
class TreeNode
{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int d)
    {
        val = d;
        left = NULL;
        right = NULL;
    }
};

void inorder(TreeNode *root,vector<int>&ans)
{
    if(!root)
    {
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
TreeNode* solve(vector<int> &ans, int s, int e) {
    if (s > e) return NULL;

    int mid = s + (e - s) / 2;
    TreeNode *root = new TreeNode(ans[mid]);
    root->left = solve(ans, s, mid - 1);
    root->right = solve(ans, mid + 1, e);

    return root;
}


TreeNode *insert(TreeNode *root,int data)
{
    if(root == NULL)
    {
        return root = new TreeNode(data);
    }
    else if(data < root->val)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }
    return root;
}
void create(TreeNode *&root)
{
    int data;
    cin >> data;
    while(data != -1)
    {
        root = insert(root,data);
        cin >> data;
    }
}

void printInorder(TreeNode *root)
{
    if(root == NULL)
    {
        return;
    }
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}
int main() {
    TreeNode *root = NULL;
    cout << "Enter the root node values (end with -1): ";
    create(root);

    vector<int> ans;
    inorder(root, ans);

    TreeNode *balancedRoot = solve(ans, 0, ans.size() - 1);

    cout << "Inorder of balanced BST: ";
    printInorder(balancedRoot);
    cout << endl;

    return 0;
}
