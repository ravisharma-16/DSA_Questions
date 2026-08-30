#include<iostream>
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

class Solution {
private:
    node* prev = NULL;
    node *head = NULL;
public:
    void flatten(node* root) {
       if (!root)
       {
        return;
       }

        flatten(root->left);

        if (!prev) {
            head = root; 
        } else {
            prev->right = root; 
            root->left = prev;  
        }
        prev = root; 

        flatten(root->right);
    }
};