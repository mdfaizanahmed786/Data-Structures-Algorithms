#include <iostream>
#include<stack>
using namespace std;

int main() {
  string s1="faizan";
  stack<char> rev;
  for(auto it: s1) rev.push(it);
  while(!rev.empty()){
    cout<<rev.top()<<" ";
    rev.pop();
  }
  return 0;
}