//Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> st;
  stack<int> newSt;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    st.push(x);
  }
  cout<<"Stack Values: "<<endl;
  while(!st.empty())
  {
    cout<<st.top()<<" ";
    int k = st.top();
    newSt.push(k);
    st.pop();
  }
  cout<<endl;
  cout<<"Reversed Stack using Stack formula again: ";
  while(!newSt.empty())
  {
    cout<<newSt.top()<<" ";
    newSt.pop();
  }
  
  return 0;
}