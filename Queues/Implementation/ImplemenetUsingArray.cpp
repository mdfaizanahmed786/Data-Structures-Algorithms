#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
int size;
int front;
int rear;
int *arr;
// rear is always pointing to empty cell in array

Queue(int size){
  this->size=size;
  this->rear=0;
  this->front=0;
  arr=new int[size]; 
}

bool isEmpty(){
  if(rear==front){
    return true;
  }
  return false;
}

int getSize(){
   return rear-front;
}

void pop(){
  if(rear==front){
    cout<<"Queue is empty"<<endl;
  }
  else{
    arr[front]=-1;
    front++;
    // there might be the case if front be equal to rare, in this case we need to start from the start again
    if(front==rear){
      front=0;
      rear=0;
    }
  }
}

void push(int data){
  if(rear==size){
    cout<<"Queue is full"<<endl;
  }
  else{
    arr[rear]=data;
    if(rear<size){
    rear++;
      }
  }
}

int getTop(){
  if(rear==front){
    cout<<"Queue is empty"<<endl;
    return -1;
  }
  else{
    return arr[front];
  }
}



};
int main() {
// queue<int> q;
// q.push(4);
// q.push(5);
// cout<<q.back()<<endl;
  
// cout<<q.size()<<endl;
// cout<<q.front()<<endl;
// while(!q.empty()){
// cout<<q.front()<<" ";
//   q.pop();
// }

Queue q(5);
q.push(4);
q.push(7);
q.push(10);
cout<<q.getSize()<<endl;
cout<<q.getTop()<<endl;
q.pop();
q.pop();
q.pop();
q.pop();
cout<<q.getSize()<<endl;

  

  
  
return 0;
}