// Question 1: Create a C++ program that reads a sequence of integers
//  from the user until they enter a negative number.
//  Store these integers in a vector and then print the vector.

#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a;
  while(true)
  {
    int x;
    cin>>x;
    if(x<0)
    {
      break;
    }
    a.push_back(x);
  }

  for(int val:a)
  {
    cout<<val<<" ";
  }
  return 0;
}