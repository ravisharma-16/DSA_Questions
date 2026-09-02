// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        if(!root)
//        {
//         return NULL;
//        }
//       if(root == p || root == q)
//       {
//         return root;
//       }
//        TreeNode *leftside = lowestCommonAncestor(root->left,p,q);
//        TreeNode *rightside = lowestCommonAncestor(root->right,p,q);
//        if(leftside != NULL && rightside != NULL)
//        {
//         return root;
//        }
//         else if(leftside == NULL && rightside != NULL)
//        {
//          return rightside;
//        }
//        else if(leftside != NULL && rightside == NULL)
//        {
//         return leftside;
//        }
//        else
//        {
//         return NULL;
//        }
//     }
// };




// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         // Store parent pointers for all nodes
//         unordered_map<TreeNode*, TreeNode*> parent;
//         stack<TreeNode*> st;
//         parent[root] = NULL;
//         st.push(root);
        
//         // BFS/DFS to find both nodes and store parent pointers
//         while(!st.empty()) {
//             TreeNode* curr = st.top();
//             st.pop();
            
//             if(curr->left) {
//                 parent[curr->left] = curr;
//                 st.push(curr->left);
//             }
//             if(curr->right) {
//                 parent[curr->right] = curr;
//                 st.push(curr->right);
//             }
//         }
        
//         // Store all ancestors of p
//         unordered_set<TreeNode*> ancestors;
//         while(p) {
//             ancestors.insert(p);
//             p = parent[p];
//         }
        
//         // Find first common ancestor of q
//         while(q) {
//             if(ancestors.count(q)) {
//                 return q;
//             }
//             q = parent[q];
//         }
        
//         return NULL;
//     }
// };