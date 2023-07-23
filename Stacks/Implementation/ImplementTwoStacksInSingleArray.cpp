#include <iostream>
#include<stack>
using namespace std;

class Stack{
  public:
  int size;
  int top1;
  int top2;
  int *arr;

  Stack(int size){
     this->size=size;
     arr=new int[size];
     top1=-1;
     top2=size;
  }


void push1(int data){
     if(top2-top1==1){
      cout<<"Stack 1 is overflown"<<endl;
     }
     else{
      top1++;
      arr[top1]=data;
     }
}
  
void push2(int data){
     if(top2-top1==1){
      cout<<"Stack 2 is overflown"<<endl;
     }
     else{
      top2--;
      arr[top2]=data;
     }
}


void pop1(){
  if(top1==-1) cout<<"Stack is empty"<<endl;
  else{
    arr[top1]=0;
    top1--;
  }
}

void pop2(){
  if(top2==size) cout<<"Stack is empty"<<endl;
  else{
       arr[top2]=0;
    top2++;
  }
}

// Just for testing purpose, **DO NOT IMPLEMENT THIS IN INTERVIEW**
void print(){
  for(int i=0; i<size; i++){
cout<<arr[i]<<" ";
  }
}
   
};


int main() {
//   Stack is a data structure that works on the principle of Last in first out..

Stack s(10);
s.push1(10);
s.push1(20);
s.push1(30);
s.push1(40);
s.push1(50);

s.print();
cout<<endl;

s.push2(101);
s.push2(102);
s.push2(103);
s.push2(104);
s.push2(105);
s.print();
cout<<endl;


s.push1(1);
s.push2(2);



s.pop1();
s.print();
cout<<endl;

s.pop2();
s.print();
cout<<endl;

// cout<<s.getTop()<<endl;


  return 0;
}