#include <bits/stdc++.h>
using namespace std;

int main() {
// usign two queues
  // of course we can use here queue in class implementation
  queue<int> q1;
  queue<int> q2;
  int i=0;
  int num;
  while(i<5){
  cout<<"Enter a number to insert into stack"<<endl;
  cin>>num;
    // algo:
    // 1. Push element to q2
    // 2. add element by element to q2 until q1 is not empty
    // 3. swap q1 and q2
  q2.push(num);
  while(!q1.empty()){
    q2.push(q1.front());
    q1.pop();
  }
   swap(q1, q2);
  i++;

  }

  
  while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
  }

  // TC: O(N)
  //  SC:O(2N)


  // Optimization of above approach TCO(N) SC:O(2N)
//   Just go on insert from bottom to the top in queue 
queue<int> q3;
int j=0;
  while(j<5){
    cout<<"Enter the number that you want to insert into the stack:"<<endl;
    int x;
    cin>>x;
    q3.push(x);
    for(int i=0; i<q3.size()-1; i++){
      q3.push(q3.front());
      q3.pop();
    }

    j++;
    
  }


  while(!q3.empty()){
    cout<<q3.front()<<" ";
    q3.pop();
  }
  
  

  
  
  
}