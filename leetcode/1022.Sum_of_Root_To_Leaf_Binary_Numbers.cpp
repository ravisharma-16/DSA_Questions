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
//     int dfs(TreeNode *root, int curr)
//     {
//         if(!root)
//         {
//             return 0;
//         }
//         curr = curr * 2 + root->val;
//         if(!root->left && !root->right)
//         {
//             return curr;
//         }
//         return dfs(root->left,curr) + dfs(root->right,curr);
//     }
// public:
//     int sumRootToLeaf(TreeNode* root) {
//         return dfs(root,0);
//     }
// };





// class Solution {
// public:
//     int sumRootToLeaf(TreeNode* root) {
//         if (!root) return 0;

//         queue<pair<TreeNode*, int>> q;
//         q.push({root, 0});
//         int total = 0;

//         while (!q.empty()) {
//             auto [node, val] = q.front(); q.pop();
//             int cur = val * 2 + node->val;

//             if (!node->left && !node->right) {
//                 total += cur;
//             } else {
//                 if (node->left)  q.push({node->left, cur});
//                 if (node->right) q.push({node->right, cur});
//             }
//         }
//         return total;
//     }
// };