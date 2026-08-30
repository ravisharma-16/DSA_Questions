#include<iostream>
#include<map>
#include<vector>
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
vector<int> vertical(node *root)
{
    vector<int>ans;
    if(root == NULL)
    {
        return ans;
    }
    map<int,map<int,vector<int>>>m;
    queue<pair<node*,pair<int,int>>>q;
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty())
    {
        pair<node*,pair<int,int>>p = q.front();
        q.pop();
        node *temp = p.first;
        int x = p.second.first;
        int y = p.second.second;
        m[x][y].push_back(temp->data);
        if(temp->left)
        {
            q.push(make_pair(temp->left,make_pair(x-1,y+1)));
        }
        if(temp->right)
        {
            q.push(make_pair(temp->right,make_pair(x+1,y+1)));
        }
    }
    for(auto x:m)
    {
        for(auto y:x.second)
        {
            for(auto z:y.second)
            {
                ans.push_back(z);
            }
        }
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
    // node *root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);
    node *root = NULL;
    cout <<"enter the data = ";
    root = inputtree(root);
    vector<int>ans = vertical(root);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}