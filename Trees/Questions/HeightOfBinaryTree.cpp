#include <bits/stdc++.h>
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
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *buildTree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    Node *root = new Node(data);

    cout << "Enter left child of " << data << endl;
    root->left = buildTree();
    cout << "Enter right child of " << data << endl;
    root->right = buildTree();

    return root;
}

int heightOfTree(Node *root)
{

    if (root == nullptr)
    {
        return 0;
    }
    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);

    return max(left, right) + 1;
}

int main()
{
    Node *root = buildTree();
    cout << heightOfTree(root);
    return 0;
}
