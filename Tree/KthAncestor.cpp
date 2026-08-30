// #include<iostream>
// #include<vector>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void solve(Node *root, int k, int node,vector<Node *>ans,int &find)
// {
//     if(!root)
//     {
//         return ;
//     }
//     ans.push_back(root);
//     if(root->data == node)
//     {
//         int index = ans.size() - k - 1;
//         if(index >= 0)
//         {
//         find = ans[index]->data;
//         }
//     }
//     solve(root->left,k,node,ans,find);
//     solve(root->right,k,node,ans,find);
//     ans.pop_back();
// }

// int kthAncestor(Node *root, int k, int node)
// {
//     vector<Node *>ans;
//     int find = -1;
//     solve(root,k,node,ans,find);
//     return find;
// }
// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);
//     root->left->left->left = new Node(8);
//     root->left->left->right = new Node(9);
//     root->left->right->left = new Node(10);
//     root->left->right->right = new Node(11);
//     root->right->left->left = new Node(12);
//     root->right->left->right = new Node(13);
//     root->right->right->left = new Node(14);
//     root->right->right->right = new Node(15);
//     cout<<kthAncestor(root,2,4);
//     return 0;
// }

