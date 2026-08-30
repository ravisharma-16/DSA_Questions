#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class TreeNode
{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void solve(TreeNode *root, vector<int>&ans,int level)
    {
        if(root == NULL)
        {
            return;
        }
        if(level == ans.size());
        {
            ans.push_back(root->data);
        }
        solve(root->right,ans,level+1);
        solve(root->left,ans,level+1);
    }

vector<int> rightSideView(TreeNode* root) {
    vector<int>ans;
    if(root == NULL)
    {
        return ans;
    }
    queue<TreeNode *>q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        TreeNode *last = NULL;
        for(int i = 0; i < size; i++)
        {
        TreeNode *temp = q.front();
        q.pop();
        last = temp;
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
        }
        ans.push_back(last->data);

    }
   return ans;
}


TreeNode *inputtree(TreeNode *root)
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new TreeNode(data);
    cout << "enter the left child of " << data << endl;
    root->left = inputtree(root->left);
    cout << "enter the right child of " << data << endl;
    root->right = inputtree(root->right);
    return root;
}
int main()
{
    TreeNode *root = NULL;
    cout<<"enter the root data = ";
    root = inputtree(root);
    vector<int>ans;
    solve(root,ans,0);
    for (auto i :rightSideView(root))
    {
        cout << i <<" ";
    }  
  return 0;
}

