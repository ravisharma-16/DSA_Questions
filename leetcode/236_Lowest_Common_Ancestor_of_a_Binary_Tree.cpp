// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(!root)
//         {
//             return NULL;
//         }
//         if(root == p || root == q)
//         {
//             return root;
//         }
//         TreeNode *leftcheck = lowestCommonAncestor(root->left,p,q);
//         TreeNode *rightcheck = lowestCommonAncestor(root->right,p,q);
//         if(leftcheck && rightcheck)
//         {
//             return root;
//         }
//         else if(!leftcheck && rightcheck)
//         {
//             return rightcheck;
//         }
//         else if(leftcheck && !rightcheck)
//         {
//             return leftcheck;
//         }
//         else
//         {
//             return NULL;
//         }
//     }
// };