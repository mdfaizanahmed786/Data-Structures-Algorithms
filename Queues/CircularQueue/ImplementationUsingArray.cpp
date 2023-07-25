#include <bits/stdc++.h>
using namespace std;
class Cqueue{
public:
int data;
int size;
int rear;
int front;
int *arr;

Cqueue(int size){
  arr=new int[size];
  this->size=size;
  this->rear=-1;
  this->front=-1;
}

void push(int data){
  // if we are inserting first element
  if((front==0 && rear==size-1) || rear==front-1){
    
    cout<<"Queue is full"<<endl;
  }
 else if(front==-1){
    front=rear=0;
    arr[rear]=0;
  }
  else if(rear==size-1 && front!=0){
        rear=0;
    arr[rear]=0;
  } 
  else {
    rear=0;
    arr[rear]=data;
  }
}

void pop(){
  if(front==-1){
    cout<<"Queue is empty"<<endl;
  }
  else if(front==rear){
    arr[front]=-1;
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

bool isEmpty(){
  if(front==-1) return true;
  return false;
}

int getTop(){
   if(front==-1){
     cout<<"Queue is empty"<<endl;
   }

  return arr[front];
}


};





int main() {



  
  
return 0;
}