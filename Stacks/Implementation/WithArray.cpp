#include <iostream>
#include<stack>
using namespace std;

// Stack Implmentation using array
class Stack{
  public:
  int size;
  int top;
  int *arr;

  Stack(int size){
     this->size=size;
     arr=new int[size];
     top=-1;
  }

  void push(int data){
    if(size-top>1){
      top++;
      arr[top]=data;
    }
    else{
      cout<<"Stack overflow"<<endl;
    }
  }


  int getTop(){
   if(top==-1){
    cout<<"Stack is empty";
   }

   else{
    return arr[top];
   }
  }

  int getSize(){
    return top+1;
  }


  void pop(){
    if(top==-1){
      cout<<"Stack is empty"<<endl;
      return;
    }
    else{
      top--;
    }
  }

  bool isEmpty(){
    if(top==-1) return true;
    return false;
  }
  
};


int main() {
//   Stack is a data structure that works on the principle of Last in first out..
stack<int> st;
st.push(10);
st.push(30);
st.push(40);
st.push(50);

cout<<st.top()<<endl;
cout<<st.empty()<<endl;
cout<<st.size()<<endl;
while(st.size()!=0){
  cout<<st.top()<<" ";
  st.pop();
}

Stack s(10);
s.push(10);
s.push(20);
s.push(30);
s.push(40);


cout<<s.getTop()<<endl;
cout<<s.getSize()<<endl;
cout<<s.isEmpty()<<endl;

while(!s.isEmpty()){
  cout<<s.getTop()<<" ";
  s.pop();
}


// cout<<s.getTop()<<endl;


  return 0;
}