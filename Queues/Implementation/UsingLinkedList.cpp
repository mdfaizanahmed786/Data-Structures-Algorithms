#include <bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(){
  this->data=0;
  this->next=nullptr;
}
Node (int data){
  this->data=data;
  this->next=nullptr;
}

};

class Queue{
public:
Node *front=nullptr;
Node *rear=nullptr;
int size;

Queue(int size){
  this->size=size;
  
}
int getSize() {
  Node *temp = front; // Start from the front of the queue
  int i = 0;
  while (temp != nullptr) {
    temp = temp->next;
    i++;
  }
  return i;
}


void push(int data){
  // first I need to check whether the size of Queue is full or not.
  if(getSize()==size){
    cout<<"Queue is full"<<endl;
  }
  else{
    Node *newNode=new Node(data);
    if(front==nullptr){
        front=rear=newNode;
        front->next=nullptr;
    }
    else{
      rear->next = newNode;
      newNode->next = nullptr;
      rear = newNode; // Update the rear pointer
      
    }
  }
  
}

void pop(){
  if(front==nullptr){
    cout<<"Queue is empty"<<endl;
  }
  else{
    if(front->next){
      Node *temp=front;
      front=temp->next;
      temp->next=nullptr;
       delete temp;

    }
    else{
      front=nullptr;
      rear=nullptr;
    }
  }
}

bool isEmpty(){
  return front==nullptr;
}

int getTop(){
  if(front==nullptr){
    cout<<"Queue is empty"<<endl;
    return -1;
  }
return front->data;
}

};
int main() {
  Queue q(5);
  q.push(5);
  q.push(4);
  q.push(3);
  q.push(6);
  cout<<q.getTop()<<endl;
  cout<<q.getSize()<<endl;
  q.pop();
  cout<<q.getSize()<<endl;
  cout<<q.getTop()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
  
  
  
  
  
}