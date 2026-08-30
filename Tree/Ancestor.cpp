#include<iostream>
#include<vector>
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

Node *lowestCommonAncestor(Node* &root, Node* &p, Node* &q) {
    if(!root)
    {
     return NULL;
    }
   if(root == p || root == q)
   {
     return root;
   }
   Node *leftside = lowestCommonAncestor(root->left,p,q);
   Node *rightside = lowestCommonAncestor(root->right,p,q);
    if(leftside != NULL && rightside != NULL)
    {
     return root;
    }
     else if(leftside == NULL && rightside != NULL)
    {
      return rightside;
    }
    else if(leftside != NULL && rightside == NULL)
    {
     return leftside;
    }
    else
    {
     return NULL;
    }
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
    Node *p = root->left->left->left;
    Node *q = root->left->right->right;
    cout<<lowestCommonAncestor(root,p,q)->data;
    return 0;
}
