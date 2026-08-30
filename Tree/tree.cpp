// #include <iostream>
// #include <queue>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *buildtree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     cout << "enter the left node data of " << data << " = " << endl;
//     root->left = buildtree(root->left);
//     cout << "enter the right node data of " << data << " = " << endl;
//     root->right = buildtree(root->right);
//     return root;
// }

// void print(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// void inorder(node *root) //    LNR
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void preorder(node *root) //    NLR
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void postorder(node *root) //    LRN
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// void buildtreelevel(node *&root)
// {
//     queue<node *> q;
//     int data;
//     cout << "enter the data = ";
//     cin >> data;
//     root = new node(data);
//     q.push(root);
//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         int leftdata;
//         cout << "enter the left node = ";
//         cin >> leftdata;
//         if (leftdata != -1)
//         {
//             temp->left = new node(leftdata);
//             q.push(temp->left);
//         }
//         int rightdata;
//         cout << "enter the right node = ";
//         cin >> rightdata;
//         if (rightdata != -1)
//         {
//             temp->right = new node(rightdata);
//             q.push(temp->right);
//         }
//     }
// }

// int main()
// {
//     node *root = NULL;
//     buildtreelevel(root);
//     print(root);
//     // cout << "enter the data = ";
//     // root = buildtree(root);
//     // print(root);
//     // cout << "inorder tree left node right = ";
//     // inorder(root);
//     // cout << endl
//     //      << "preorder tree node left right = ";
//     // preorder(root);
//     // cout << endl
//     //      << "postorder tree left right node = ";
//     // postorder(root);
// }
// // 1 3 7 -1 -1  11 -1 -1 5 17 -1 -1 -1

#include <iostream>
#include <queue>
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

void inputdata(node *&root)
{
    queue<node *> q;
    int data;
    cout << "Enter the root data: ";
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftnode;
        cout << "Enter the left node data for " << temp->data << ": "<< endl;
        cin >> leftnode;

        if (leftnode != -1)
        {
            temp->left = new node(leftnode);
            q.push(temp->left);
        }

        int rightnode;
        cout << "Enter the right node data for " << temp->data << ": " << endl;
        cin >> rightnode;

        if (rightnode != -1)
        {
            temp->right = new node(rightnode);
            q.push(temp->right);
        }
    }
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void levelorder(node *root)
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

void printtree(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
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

node *buildtree(node *root)
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "enter the left child of " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter the right child of " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

int main()
{
    node *root = NULL;

    // input data no 1
    // cout << "enter the root node data : ";
    // root = buildtree(root);

    // input data no 2
    inputdata(root);

    cout << "print level order traversal : " << endl;
    levelorder(root);

    cout << "print tree : ";
    printtree(root);
    cout << endl;

    cout << "inorder tree print : ";
    inorder(root);  // LNR
    cout << endl;

    cout << "postorder tree print : ";
    postorder(root);  // LRN
    cout << endl;

    cout << "preorder tree print : ";
    preorder(root);  // NLR
    cout << endl;
}