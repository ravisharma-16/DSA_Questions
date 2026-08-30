#include<iostream>
#include<climits>
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
    void solve(Node *root, int len, int &maxlen, int &maxsum, int sum)
    {
        if (root == NULL)
        {
            if (len > maxlen)
            {
                maxlen = len;
                maxsum = sum;
            }
            else if (len == maxlen)
            {
                maxsum = max(sum, maxsum);
            }
            return;
        }
        sum += root->data;
        solve(root->left, len + 1, maxlen, maxsum, sum);
        solve(root->right, len + 1, maxlen, maxsum, sum);
    }
};
Node *inputtree(Node *root)
{
    int data;
    cin >> data;
    if(data == -1)
    {
        return NULL;
    }
    root = new Node(data);
    cout << "Enter left child of " << data << " ";
    root->left = inputtree(root->left);
    cout << "Enter right child of " << data << " ";
    root->right = inputtree(root->right);
    return root;
}
    int main()
    {
        Node *root = NULL;
        root = inputtree(root);
        // Node *root = new Node(4);
        // root->left = new Node(2);
        // root->right = new Node(5);
        // root->left->left = new Node(7);
        // root->left->right = new Node(1);
        // root->right->left = new Node(2);
        // root->right->right = new Node(3);
        // root->left->right->left = new Node(6);
        // root->left->right->right = new Node(2);
        // root->right->right->left = new Node(1);
        // root->right->right->right = new Node(3);
        int lenght = 0;
        int maxlen = 0;
        int sum = 0;
        int maxsum = INT_MIN;
        Node temp(0);
        temp.solve(root, lenght, maxlen, maxsum, sum);
        cout << maxsum<< endl;
        return 0;
    }
