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
//     unordered_map<int,int>store_inorder_index;
//     TreeNode *solve(vector<int>&preorder,vector<int>&inorder,int &index,int inorderst,int inorderend)
//     {
//         if(index >= preorder.size() || inorderst > inorderend)
//         {
//             return NULL;
//         }
//         int element = preorder[index++];
//         TreeNode *ans = new TreeNode(element);
//         int pos = store_inorder_index[element];
//         ans->left = solve(preorder,inorder,index,inorderst,pos-1); 
//         ans->right = solve(preorder,inorder,index,pos+1,inorderend);
//         return ans; 
//     }
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         for(int i = 0;i < inorder.size(); i++)
//         {
//             store_inorder_index[inorder[i]] = i;
//         }
//         int idx = 0;
//         TreeNode *ans = solve(preorder,inorder,idx,0,inorder.size()-1);
//         return ans;
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
//     int findindex(vector<int>&in,int ele)
//     {
//         for(int i = 0; i < in.size(); i++)
//         {
//             if(in[i] == ele)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
//     TreeNode *solve(vector<int>&preorder,vector<int>&inorder,int &index,int inorderst,int inorderend)
//     {
//         if(index >= preorder.size() || inorderst > inorderend)
//         {
//             return NULL;
//         }
//         int element = preorder[index++];
//         TreeNode *ans = new TreeNode(element);
//         int pos = findindex(inorder,element);
//         ans->left = solve(preorder,inorder,index,inorderst,pos-1); 
//         ans->right = solve(preorder,inorder,index,pos+1,inorderend);
//         return ans; 
//     }
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int idx = 0;
//         TreeNode *ans = solve(preorder,inorder,idx,0,inorder.size()-1);
//         return ans;
//     }
// };