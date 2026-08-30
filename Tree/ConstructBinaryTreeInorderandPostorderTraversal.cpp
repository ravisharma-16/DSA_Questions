// leetcode no = 106
// problem: Construct Binary Tree from Inorder and Postorder Traversal
// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/
#include<iostream>
#include<vector>
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
int find(vector<int>& in, int element)
    {
        for (int i = 0; i < in.size(); i++)
        {
            if (in[i] == element) {
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>&post,vector<int>&in,int& index,int inorderstart,int inorderend, int n)
    {
        if (index < 0 || inorderstart > inorderend)
        {
            return NULL;
        }
        
        int element = post[index--];
        TreeNode* root = new TreeNode(element);
        int position = find(in, element);
        
        root->right = solve(post, in, index, position + 1, inorderend, n);
        root->left = solve(post, in, index, inorderstart, position - 1, n);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        if (post.empty() || in.empty())
        {
            return NULL;
        }
        
        int postindex = post.size() - 1;
        return solve(post, in, postindex, 0, in.size() - 1, in.size());
    }
    void print(TreeNode* root)
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
    vector<int> inorder = { 9,3,15,20,7 };
    vector<int> postorder = { 9,15,7,20,3 };
    TreeNode* root = buildTree(inorder, postorder);
    print(root); // Output the root value
    return 0;
}