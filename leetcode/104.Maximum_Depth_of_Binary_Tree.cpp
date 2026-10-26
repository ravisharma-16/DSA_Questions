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
// public:
//     int maxDepth(TreeNode* root) {
//         if(!root)
//         {
//             return 0;
//         }
//         int leftside = maxDepth(root->left);
//         int rightside = maxDepth(root->right);
//         return max(leftside,rightside) + 1;
//     }
// };






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
// public:
//     int maxDepth(TreeNode* root) {
//         if(!root)
//         {
//             return 0;
//         }
//         int count = 0;
//         queue<TreeNode *>q;
//         q.push(root);
//         q.push(NULL);
//         while(!q.empty())
//         {
//             TreeNode *temp = q.front();
//             q.pop();
//             if(temp == NULL)
//             {
//                 count++;
//                 if(!q.empty())
//                 {
//                 q.push(NULL);
//                 }
//             }
//             else
//             {
//                 if(temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//                 if(temp->right)
//                 {
//                     q.push(temp->right);
//                 }
//             }
//         }
//         return count;
//     }
// };