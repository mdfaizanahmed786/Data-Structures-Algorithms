#include <bits/stdc++.h>
using namespace std;
// Level order traversal

class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};

Node * buildTree(){
    int data;
    cin>>data;
    if(data==-1){
        return nullptr;
    }
    Node *root=new Node(data);

    cout<<"Enter left child of "<<data<<endl;
    root->left=buildTree();
    cout<<"Enter right child of "<<data<<endl;
    root->right=buildTree();

    return root;


}




// LNR pattern
void inorderTraversal(Node *root){
  if(root==nullptr){
    return;
  }
  inorderTraversal(root->left);
  cout<<root->data<<" ";
  inorderTraversal(root->right);
}

int main() {
  Node *root=buildTree();

  inorderTraversal(root);

}