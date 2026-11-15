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
//     void solve(TreeNode *root,int &count,vector<int>&arr,int tar)
//     {
//         if(!root)
//         {
//             return;
//         }
//         arr.push_back(root->val);
//         solve(root->left,count,arr,tar);
//         solve(root->right,count,arr,tar);
//         long long sum = 0;
//         for(int i = arr.size() - 1; i >= 0; i--)
//         {
//             sum += arr[i];
//             if(sum == tar)
//             {
//                 count++;
//             }
//         }
//         arr.pop_back();
//     }
// public:
//     int pathSum(TreeNode* root, int targetSum) {
//         vector<int>arr;
//         int count = 0;
//         solve(root,count,arr,targetSum);
//         return count;
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
//     void solve(TreeNode *root,int &count,vector<int>arr,int tar)
//     {
//         if(!root)
//         {
//             return;
//         }
//         arr.push_back(root->val);
//         solve(root->left,count,arr,tar);
//         solve(root->right,count,arr,tar);
//         long long sum = 0;
//         for(int i = arr.size() - 1; i >= 0; i--)
//         {
//             sum += arr[i];
//             if(sum == tar)
//             {
//                 count++;
//             }
//         }
//     }
// public:
//     int pathSum(TreeNode* root, int targetSum) {
//         vector<int>arr;
//         int count = 0;
//         solve(root,count,arr,targetSum);
//         return count;
//     }
// };