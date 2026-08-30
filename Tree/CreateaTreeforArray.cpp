// Problem: Convert Sorted Array to Binary Search Tree
// 108. Convert Sorted Array to Binary Search Tree

#include <iostream>
#include <vector>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int d) {
        val = d;
        left = NULL;
        right = NULL;
    }
};
class Solution {
    void solve(vector<int>&arr,TreeNode *&root,int s,int e)
    {
        if(s > e)
        {
            return;
        }
        int mid = s + (e - s) / 2;
        root = new TreeNode(arr[mid]);
        solve(arr, root->left, s, mid - 1);
        solve(arr, root->right, mid + 1, e);
    }
public:
    TreeNode* sortedArrayToBST(vector<int>&arr) {
        TreeNode *root = NULL;
        solve(arr,root,0,arr.size() - 1);
        return root;
    }
};

