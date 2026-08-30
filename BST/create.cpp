#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int maxnum2(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

node *deletenode(node *root,int val)
{
    if(!root)
    {
        return NULL;
    }
    if(root->data == val)
    {
        // If the node to be deleted is a leaf node, delete it and return NULL
        if(!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        // If the node has only one child, return that child
        else if(!root->left || !root->right)
        {
            node *temp = root->left ? root->left : root->right;
            delete root;
            return temp;
        }
        // If the node has two children, find the inorder predecessor (max in left subtree)
        else
        {
            int maxval = maxnum2(root->left);
            root->data = maxval;
            root->left = deletenode(root->left,maxval);
            return root;
        }
    }

    // If the value to be deleted is less than the root's data, go left
    else if(val < root->data)
    {
        root->left = deletenode(root->left,val);
        return root;
    }
    // If the value to be deleted is greater than the root's data, go right
    else
    {
        root->right = deletenode(root->right,val);
        return root;
    }
}

int minnum2(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

// Function to find the minimum number in the BST
int mixnum(node *root)
{
    queue<node *> q;
    q.push(root);
    int max = root->data;
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            node *temp = q.front();
            if(temp->data < max)
            {
                max = temp->data;
            }
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return max;
}

// Function to find the maximum number in the BST
int maxnum(node *root)
{
    queue<node *> q;
    q.push(root);
    int max = 0;
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            node *temp = q.front();
            if(temp->data > max)
            {
                max = temp->data;
            }
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return max;
}

void printTreeInOrder(node *root) {
    stack<node*> st;
    node* curr = root;
    
    while (curr || !st.empty()) {
        while (curr) {
            st.push(curr);
            curr = curr->left;   // print using loop in inorder
        }
        
        curr = st.top();
        st.pop();
        cout << curr->data << " ";
        
        curr = curr->right;
    }
    cout << endl;
}

void inorder(node *root) //    LNR
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root) //    NLR
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) //    LRN
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void print(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

// Function to insert a node in the BST
node *insert(node *root, int data)
{
    if (root == NULL)
    {
        return root = new node(data);
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to create the BST
void create(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insert(root, data);
        cin >> data;
    }
}

int main()
{
    node *root = NULL;
    cout << "Enter the data to be inserted in the BST (-1 to stop): ";
    create(root);
    cout << "The BST is: " << endl;
    print(root);
    cout << "Inorder Traversal: ";
    // delete 
    root = deletenode(root, 30);
    inorder(root);
    cout << endl;
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;
    cout << "Maximum number in the BST: " << maxnum(root) << endl;
    cout << "Minimum number in the BST: " << mixnum(root) << endl;
    return 0;
}

// 10 8 21 7 27 5 4 3 -1
// 50 20 70 10 30 90 110 -1