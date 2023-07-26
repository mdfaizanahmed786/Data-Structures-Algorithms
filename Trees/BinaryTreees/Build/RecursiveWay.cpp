#include<bits/stdc++.h>
using namespace std;
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




int main(){
    Node *root=buildTree();
    return 0;

}