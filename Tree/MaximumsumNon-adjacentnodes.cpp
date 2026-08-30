// geeksforgeeks
// Maximum sum of Non-adjacent nodes

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
pair<int, int> solve(Node *root)
{
    if (!root)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = solve(root->left);
    pair<int, int> right = solve(root->right);
    pair<int, int> ans;
    ans.first = root->data + left.second + right.second;
    ans.second = max(left.first, left.second) + max(right.first, right.second);
    return ans;
}
int getMaxSum(Node *root)
{
    pair<int, int> p = solve(root);
    return max(p.first, p.second);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    cout << "Maximum sum of Non-adjacent nodes: " << getMaxSum(root) << endl;
    return 0;
}