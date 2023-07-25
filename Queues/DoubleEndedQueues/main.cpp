#include <bits/stdc++.h>
using namespace std;

// Kind of going in circular way
class Deque{
public:
int size;
int data;
int front;
int rear;
int *arr;
Deque(int size){
  this->size=size;
  arr=new int[size];
  this->front=-1;
  this->rear=-1;
  
}

void pushRear(int data){
  // checking if size is full already
  if((front==0 && rear==size-1 ) || (rear==front-1)){
    cout<<"Queue is full"<<endl;
  }
  // handling single element
  else if(front==-1){
    front=rear=0;
    arr[rear]=data;
  }

  // handling cicular condition
  else if(rear==size-1 && front!=0){
      rear=0;
      arr[rear]=data;
  }
  else{
    rear++;
    arr[rear]=data;
  }

  
}


void popFront(int data){
  if(front==-1){
    cout<<"Queue is empty"<<endl;
    
  }
    // handling single element
  else if(front==rear){
      front=-1;
    rear=-1;
  }

  else if(front==size-1){
    front=0;
  }
  else{
    front++;
  }
}


void pushFront(int data){
  if((front==0 && rear==size-1) || rear==front-1 ){
    cout<<"Queue is full"<<endl;
  }
  else if(front==-1){
    front=rear=0;
    arr[front]=data;
  }
  else if(front==0 && rear!=size-1){
    front=size-1;
    arr[front]=data;
  }
  else{
    front--;
    arr[front]=data;
  }
  
  
}


void popRear(){
  if(front==-1){
    cout<<"Queue is empty"<<endl;
    
  }
// handling single element in queue
  else if(front==rear){
    front=-1;
    rear=-1;
    
  }
    // handling circular element
  else if(rear==0){
    rear=size-1;
    
  }
  else{
    rear--;
  }
}

bool isEmpty(){
  if(front==-1) return true;
  return false;
}


};

int main() {
Deque d(5);
  


  
  
return 0;
}