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
//     private:
//     int height(TreeNode *root)
//     {
//         if(!root)
//         {
//             return 0;
//         }
//         int leftside = height(root->left);
//         int rightside = height(root->right);
//         return max(leftside,rightside) + 1;
//     }
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(!root)
//         {
//             return 0;
//         }
//         int leftside = diameterOfBinaryTree(root->left);
//         int rightside = diameterOfBinaryTree(root->right);
//         int bothside = height(root->left) + height(root->right);
//         return max(leftside,max(rightside,bothside));
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
//     int countDiameter = 0;
//     private:
//     int DiameterSolve(TreeNode *root)
//     {
//         if(!root)
//         {
//             return 0;
//         }
//         int leftside = DiameterSolve(root->left);
//         int rightside = DiameterSolve(root->right);
//         countDiameter = max(countDiameter,leftside+rightside);
//         return max(leftside,rightside) + 1;
//     }
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(!root)
//         {
//             return 0;
//         }
//         DiameterSolve(root);
//         return countDiameter;
//     }
// };