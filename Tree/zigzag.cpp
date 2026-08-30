#include <iostream>
#include <queue>
#include <vector>
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

vector<int> zigzag(node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    queue<node *> q;
    q.push(root);
    bool lefttoright = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> arr(size);
        for (int i = 0; i < size; i++)
        {
            node *temp = q.front();
            q.pop();
            int index = lefttoright ? i : size - i - 1;
            arr[index] = temp->data;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        for (auto a : arr)
        {
            ans.push_back(a);
        }
        lefttoright = !lefttoright;
    }
    return ans;
}

// vector<int> zig(node *root)
// {
//     vector<int>ans;
//     if(root == NULL)
//     {
//         return ans;
//     }
//     queue<node *>q;
//     q.push(root);
//     bool check = true;
//     while(!q.empty())
//     {
//         int size = q.size();
//         vector<int>arr(size);
//         for (int i = 0; i < size; i++)
//         {
//             node *temp = q.front();
//             q.pop();
//             int index = check ? i : size - i - 1;
//             arr[index] = temp->data;
//             if(temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if(temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//         for (auto a : arr)
//         {
//             ans.push_back(a);
//         }
//         check = !check;
//     }
     //return ans;
// }

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
    cout << "enter the data = ";
    root = inputtree(root);
    for (auto a : zigzag(root))
    {
        cout << a << " ";
    }
    cout <<endl;
    // for (auto a : zig(root))
    // {
    //     cout << a << " ";
    // }
}

// 3,9,-1,-1,20,15,-1,-1,7,-1,-1
