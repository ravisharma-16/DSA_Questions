#include<iostream>
#include<vector>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

node *createtree(vector<int>&arr, node *root)
{
    if(arr.size() == 0)
    {
        return NULL;
    }
    node *newNode = new node(arr[0]);
    root = newNode;
    node *current = newNode;
    for(int i=1; i<arr.size(); i++)
    {
        current->right = new node(arr[i]);
        current->left = NULL;
        current = current->right;
    }
    return newNode;
}

void createlist(node *root, vector<int>&arr)
{
    if(root == NULL)
    {
        return;
    }
    createlist(root->left, arr);
    arr.push_back(root->data);
    createlist(root->right, arr);
}

void flatten(node* root) {
    node *current = root;
    while(current != NULL)
    {
        if(current->left)
        {
            node *prev = current->left;
            while(prev->right)
            {
                prev = prev->right;
            }
            prev->right = current->right;
            current->right = current->left;
            current->left = NULL;
        }
        current = current->right;
    } 
}
void printList(node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->right;
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "Inorder Traversal of the tree: ";
    flatten(root);
    printList(root);
    cout << endl;
    vector<int>arr;
    createlist(root,arr);
    node *tree = createtree(arr,root);
    printList(tree);

    return 0;
}
