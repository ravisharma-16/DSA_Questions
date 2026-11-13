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
//     void solve(TreeNode *root,int level,unordered_map<int,long long>&store)
//     {
//         if(!root)
//         {
//             return;
//         }
//         store[level] = store[level] + root->val;
//         solve(root->left,level+1,store);
//         solve(root->right,level+1,store);
//     }
// public:
//     int maxLevelSum(TreeNode* root) {
//         if(!root)
//         {
//             return 0;
//         }
//         unordered_map<int,long long>store;
//         int level = 1;
//         solve(root,level,store);
//         long long maxNum = root->val;
//         for(auto it : store)
//         {
//             if(it.second > maxNum || (it.second == maxNum && it.first < level))
//             {
//                 maxNum = it.second;
//                 level = it.first;
//             }
//         }
//         return level;
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
//     int maxLevelSum(TreeNode* root) {
//         if(!root)
//         {
//             return 0;
//         }
//         int countMax = 1;
//         int countLevel = 1;
//         long long maxNum = root->val;
//         queue<TreeNode *>q;
//         q.push(root);
//         while(!q.empty())
//         {
//             int sizeQ = q.size();
//             long long sum = 0;
//             for(int i = 0; i < sizeQ; i++)
//             {
//                 sum += q.front()->val;
//                 if(q.front()->left)
//                 {
//                     q.push(q.front()->left);
//                 }
//                 if(q.front()->right)
//                 {
//                     q.push(q.front()->right);
//                 }
//                 q.pop();
//             }
//             if(sum > maxNum)
//             {
//                 maxNum = sum;
//                 countMax = countLevel;
//             }
//             countLevel++;
//         }
//         return countMax;
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
//     int maxLevelSum(TreeNode* root) {
//         if(!root)
//         {
//             return 0;
//         }
//         long long sum = 0;
//         queue<TreeNode *>q;
//         vector<long long>ans;
//         q.push(root);
//         q.push(NULL);
//         while(!q.empty())
//         {
//             TreeNode *temp = q.front();
//             q.pop();
//             if(temp == NULL)
//             {
//                 ans.push_back(sum);
//                 sum = 0;
//                 if(!q.empty())
//                 {
//                     q.push(NULL);
//                 }
//             }
//             else
//             {
//             sum += temp->val;
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
//         long long maxnum = ans[0];
//         int countMax = 1;
//         for(int i = 1; i < ans.size(); i++)
//         {
//             if(ans[i] > maxnum)
//             {
//                 maxnum = ans[i];
//                 countMax = i+1;
//             }
//         }
//         return countMax;
//     }
// };