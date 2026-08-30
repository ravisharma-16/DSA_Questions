#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int pathSum(Node *root, int sum)
{
    if (!root)
    {
        return 0;
    }
    return (root->data == sum) + pathSum(root->left, sum - root->data) + pathSum(root->right, sum - root->data);
}

void solve(Node *root, int targetSum, int &count, vector<int> ans)
{
    if (!root)
    {
        return;
    }
    ans.push_back(root->data);
    solve(root->left, targetSum, count, ans);
    solve(root->right, targetSum, count, ans);
    long long sum = 0;
    int size = ans.size() - 1;
    for (int i = size; i >= 0; i--)
    {
        sum += ans[i];
        if (sum == targetSum)
        {
            count++;
        }
    }
    ans.pop_back();
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);
    cout << pathSum(root, 8) << endl;
    int count = 0;
    vector<int> ans;
    solve(root, 8, count, ans);
    cout << count;
    return 0;
}
