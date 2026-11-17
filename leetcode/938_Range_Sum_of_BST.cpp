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
//     void solve(TreeNode *root,int &sum,int l,int h)
//     {
//         if(!root)
//         {
//             return;
//         }
//         if(root->val >= l && root->val <= h)
//         {
//             sum += root->val;
//         }
//         if(root->val > l)
//         {
//         solve(root->left,sum,l,h);
//         }
//         if(root->val < h)
//         {
//         solve(root->right,sum,l,h);
//         }
//     }
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         int sum = 0;
//         solve(root,sum,low,high);
//         return sum;
//     }
// };






// class Solution {
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         if (!root)
//         {
//             return 0;
//         }
//         int sum = 0;
//         if(low <= root->val && root->val <= high)
//         {
//             sum += root->val;
//         }
//         if(root->val > low)
//         {
//             sum += rangeSumBST(root->left, low, high);
//         }
//         if(root->val < high)
//         {
//             sum += rangeSumBST(root->right, low, high);
//         }
//         return sum;
//     }
// };