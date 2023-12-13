#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a={1,2,3,4,5};
  //access last element
  int last_element = a[a.size()-1];
  cout<<last_element<<endl;
  //alternative
  cout<<a.back()<<endl;

  //access first element 
  cout<<a[0]<<endl;
  //alternative
  cout<<a.front()<<endl;



  return 0;
}