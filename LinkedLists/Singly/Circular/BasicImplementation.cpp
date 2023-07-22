#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;

  Node(){
    this->data=0;
    this->next=nullptr;
  }

  Node(int data){
    this->data=data;
    this->next=nullptr;
  }
};

void insertNode(Node *&tail, int element, int data){
if(tail==nullptr){
  Node *newNode=new Node(data);
  tail=newNode;
  newNode->next=newNode;
return;
}
Node *temp=tail;
while(temp->data!=element){
  temp=temp->next;
}

Node *newNode=new Node(data);
newNode->next=temp->next;
temp->next=newNode;




};
void printLL(Node *tail){
    if(tail==nullptr){
        cout<<"Linked list is empty..."<<endl;
        return;
    }
  Node *temp=tail;
  do{
    cout<<temp->data<<" ";
    temp=temp->next;
  }while(temp!=tail);

  cout<<endl;
}


void deleteNode(Node *&tail, int value){
    if(tail==nullptr){
        return;
    }
    Node* prev = tail;
    Node *curr=tail->next;
    if(curr==nullptr){
       tail=nullptr;
       return;
    }

    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    // below step is curcial because if we are pointing the tail to the curr element, then tail may get deleted as well, so we are pointing tail to some other element...
    if(tail==curr){
        tail=prev;
    }
    curr->next=nullptr;
    delete curr;


}
int main() {
 
 Node *first=new Node(10);
 Node *second=new Node(20);
 Node *third=new Node(30);
 Node *fourth=new Node(40);

 first->next=second;
 second->next=third;
 third->next=fourth;
 fourth->next=first;

// doesn't matter to give only first one...
 insertNode(first, 40, 60);
 printLL(first);
 insertNode(first, 20, 300);
 printLL(first);
 insertNode(first, 10, 400);
 printLL(first);


 deleteNode(first, 10);
 printLL(first);

  return 0;
}