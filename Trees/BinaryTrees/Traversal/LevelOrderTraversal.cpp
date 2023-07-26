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


void levelOrderTraversal(Node *root){
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    Node *temp=q.front();
    cout<<temp->data<<" ";
    q.pop();
    if(temp->left){
      q.push(temp->left);
    }

    if(temp->right){
      q.push(temp->right);
      
    }
  
  }
}




int main() {
  Node *root=buildTree();
  levelOrderTraversal(root);


}