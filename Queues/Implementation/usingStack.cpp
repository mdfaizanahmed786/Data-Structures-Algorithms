#include <bits/stdc++.h>
using namespace std;

int main() {

  
// queue implementation using two stacks
stack<int> st1;
stack<int> st2;

int i=0;
  while(i<5){
    //algo
    // 1. Push everything from stack1 to stack2
    // 2. insert x or num to stack 1
    // 3. Again push every number from stack2 to stack1
    int x;
    cin>>x;
    while(!st1.empty()){
      st2.push(st1.top());
      st1.pop();
    }
    st1.push(x);

      while(!st2.empty()){
      st1.push(st2.top());
      st2.pop();
    }
    i++;
  }

  while(!st1.empty()){
    cout<<st1.top()<<" ";
    st1.pop();
  }
  
  
  
}