// class Solution {
//     bool solve(TreeNode *p,TreeNode *q)
//     {
//         if(!p && q != NULL || !q && p != NULL)
//         {
//             return false;
//         }
//         if(!p && !q)
//         {
//             return true;
//         }
//         if(p->val != q->val)
//         {
//             return false;
//         }
//         return solve(p->right,q->right) && solve(p->left,q->left) ;
//     }
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         return solve(p,q);
//     }
// };




// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(!p && !q)
//         {
//             return true;
//         }
//         if(!p || !q)
//         {
//             return false;
//         }
//         if(p->val != q->val) 
//         {
//             return false;
//         }
//         return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//     }
// };





/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p == NULL && q == NULL)
//         {
//             return true;
//         }
//         if(p != NULL && q == NULL || p == NULL && q != NULL)
//         {
//             return false;
//         }
//         bool leftans = isSameTree(p->left,q->left);
//         bool rightans = isSameTree(p->right,q->right);
//         int value = p->val == q->val;
//         if(leftans && rightans && value)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };