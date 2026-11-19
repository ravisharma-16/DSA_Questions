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
//         TreeNode *leftside = lowestCommonAncestor(root->left,p,q);
//         TreeNode *rightside = lowestCommonAncestor(root->right,p,q);
//         if(leftside && rightside)
//         {
//             return root;
//         }
//         else if(leftside && !rightside)
//         {
//             return leftside;
//         }
//         else if(!leftside && rightside)
//         {
//             return rightside;
//         }
//         else
//         {
//         return NULL;
//         }
//     }
// };




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(!root)
//         {
//             return NULL;
//         }
//         while(root != NULL)
//         {
//             if(root->val > p->val && root->val > q->val)
//             {
//                 root = root ->left;
//             }
//             else if(root->val < p->val && root->val < q->val)
//             {
//                 root = root->right;
//             }
//             else
//             {
//             return root;
//             }
//         }
//             return root;
//     }
// };