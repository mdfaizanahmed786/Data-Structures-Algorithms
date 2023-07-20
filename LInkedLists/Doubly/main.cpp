#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *prev;
  Node *next;
  Node(){
    this->data=0;
    this->next=nullptr;
    this->prev=nullptr;
  }

  Node(int data){
    this->data=data;
    this->next=nullptr;
    this->prev=nullptr;
  }
};


// Printing linked list
void printLL(Node* &head){
  Node *temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }

}

// Finding length of length of linked list
int findLength(Node *&head){
  Node *temp=head;
  int i=0;
  while(temp){
    i++;
   temp=temp->next;
  }
  return i;
}


// inserting node at head
void insertAtHead(Node *&head, int data){
  if(head==nullptr){
    Node *newNode=new Node(data);
    head=newNode;
    return;
  }

  Node *newNode=new Node(data);
  newNode->next=head;
  head->prev=newNode;
  head=newNode;

}



// inserting at tail
void insertingAtTail(Node *&head, int data){
   if(head==nullptr){
     Node *newNode=new Node(data);
    head=newNode;
    return;
   }

   Node *temp=head;
   while(temp->next){
    temp=temp->next;
   }
   Node *newNode=new Node(data);
   temp->next=newNode;
   newNode->prev=temp;

   newNode->next=nullptr;

}

// insert at certain position
void insertAtPosition(Node *&head, int position, int data){
  if(head==nullptr){
     Node *newNode=new Node(data);
    head=newNode;
    return;
   }

   

  if(position==0){
    insertAtHead(head, data);
    return;
  }
  if(position==findLength(head)){
    insertingAtTail(head, data);
    return;
  }

  int i=1;
  Node *temp=head;
  while(i<position-1){
    temp=temp->next;
    i++;

  }


  Node *nextNode=temp->next;
  Node *newNode=new Node(data);

  temp->next=newNode;
  newNode->prev=temp;


  newNode->next=nextNode;
  nextNode->prev=newNode;
}


// deleting first node
void deleteAtFirst(Node *&head){
  if(head==nullptr){
    return;
  }

  Node *temp=head;
  head=temp->next;
  head->prev=nullptr;
  temp->next=nullptr;
  delete temp;


  
}

// deleting last node
void deleteLastNode(Node *&head){
  if(head==nullptr){
    return;
  }
// if only head one exist
   if(head->next==nullptr){
        return nullptr;
    }

  Node *temp=head;
  Node *p=nullptr;
  while(temp->next){
    p=temp;
    temp=temp->next;
  }
  p->next=nullptr;

  temp->prev=nullptr;

  delete temp;

  
}


// deleting node at certain position
void deleteNodeAtPosition(Node *&head, int position){
  if(head==nullptr){
    return;
  }
  if(position==0){
    deleteAtFirst(head);
    return;
  }

  if(position==findLength(head)){
    deleteLastNode(head);
    return;
  }

  int i=1;
  Node *prevN=head;
  while(i<position-1){
    prevN=prevN->next;
    i++;
  }

  Node *curr=prevN->next;
  Node *nextN=curr->next;

  prevN->next=nextN;
  nextN->prev=prevN;

  delete curr;



}






int main() {
  Node *first=new Node(10);
  Node *second=new Node(20);
  Node *third=new Node(30);

  first->next=second;
  second->prev=first;

  second->next=third;
  third->prev=second;


  printLL(first);
  cout<<endl;
  cout<<"Length of Linked list"<<endl;
  cout<<findLength(first)<<endl;


// inserting at head
  insertAtHead(first, 30);
//   Insering at tail
  insertingAtTail(first, 60);
  printLL(first);

// Length of a linked list
  cout<<"Length of Linked list"<<endl;
  cout<<findLength(first)<<endl;


// Inserting at a certain position of a linked list
insertAtPosition(first, 3, 500);
printLL(first);
cout<<endl;

// Deleting the first node
deleteAtFirst(first);
printLL(first);
cout<<endl;

// deleting last node
deleteLastNode(first);
printLL(first);
cout<<endl;

// deleting node at certain position
deleteNodeAtPosition(first, 2);
printLL(first);
cout<<endl;






  return 0;
}