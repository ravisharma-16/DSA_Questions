// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
//     int maxnum(TreeNode *root)
//     {
//         TreeNode *temp = root;
//         while(temp && temp->left)
//         {
//             temp = temp->left;
//         }
//         return temp->val;
//     }
//     TreeNode *solve(TreeNode* root, int key)
//     {
//         if(!root)
//         {
//             return NULL;
//         }
//         if(root->val == key)
//         {
//         if(!root->left && !root->right)
//         {
//             delete root;
//             return NULL;
//         }
//         else if(!root->left || !root->right)
//         {
//             TreeNode *temp = root->left ? root->left : root->right;
//             delete root;
//             return temp;
//         }
//         else
//         {
//             int minnumofright =  maxnum(root->right);
//             root->val = minnumofright;
//             root->right = solve(root->right,minnumofright);
//             return root;
//         }
//         }
//         else if(root->val > key)
//         {
//             root->left = solve(root->left,key);
//         }
//         else
//         {
//             root->right = solve(root->right,key);
//         }
//         return root;
//     }
// public:
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         root = solve(root,key);
//         return root; 
//     }
// };