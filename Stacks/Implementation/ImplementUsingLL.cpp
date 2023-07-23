#include <iostream>
#include<stack>
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

class Stack{
  public:
  Node *head=nullptr;
  int size;
  Stack(int size){
    this->size=size;
  }

  int findLengthOfLinkedList(Node *head){
    Node *temp=head;
    int length=0;
    while(temp){
      temp=temp->next;
      length++;
    }
    return length;
  }

  int getSize(){
    return findLengthOfLinkedList(head);
  }
 

  void push(int data) {
    if (head == nullptr) {
        Node *newNode = new Node(data);
        head = newNode;
        return;
    } else {
      if(findLengthOfLinkedList(head)==size){
        cout<<"Stack is full"<<endl;
        return;
      }
      
        Node *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        Node *elem = new Node(data);
        temp->next = elem;
    }
}

  bool isEmpty(){
    if(head==nullptr) return true;
    return false;
  }

  int getTop() {
    if (head == nullptr) {
        cout << "No element in stack" << endl;
        return -1; 
    } else {
        Node *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        return temp->data;
    }
}


void pop() {
    if (head == nullptr) {
        cout << "Stack is empty" << endl;
    } else if (head->next == nullptr) {
        delete head;
        head = nullptr;
    } else {
        Node *temp = head;
        Node *p = nullptr;
        while (temp->next) {
            p = temp;
            temp = temp->next;
        }
        p->next = nullptr;
        delete temp;
    }
}




};

int main() {

  Stack s(5);
  s.push(5);
  s.push(5);
  s.push(7);
  s.push(10);
  s.push(11);



//   cout<<s.getTop()<<endl;
//   cout<<s.getSize()<<endl;

//   cout<<s.isEmpty()<<endl;

while(!s.isEmpty()){
  cout<<s.getTop()<<" ";
  s.pop();
}


  return 0;
}