#include<iostream>
#include<map>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

vector<int> topview(node *root)
{
    vector<int>ans;
    if(root == NULL)
    {
        return ans;
    }
    map<int,int>mp;  // hd data
    queue<pair<node *,int>>q;  // data hd
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<node*,int>temp = q.front();
        q.pop();
        node *frontnode = temp.first;
        int hd = temp.second;

        mp[hd] = frontnode->data;

        if(frontnode->left)
        {
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right)
        {
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
    for(auto i : mp)
    {
        ans.push_back(i.second);
    }
    return ans;
}

node *inputtree(node *root)
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "enter the left child of " << data << endl;
    root->left = inputtree(root->left);
    cout << "enter the right child of " << data << endl;
    root->right = inputtree(root->right);
    return root;
}
int main()
{
    node *root = NULL;
    cout<<"enter the root data = ";
    root = inputtree(root);
    for (auto i :topview(root))
    {
        cout << i <<" ";
    }  
  return 0;
}