#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  cout<<v.capacity()<<endl;

  v.push_back(10);
  cout<<v.capacity()<<endl;
  v.push_back(20);
  cout<<v.capacity()<<endl;
  v.push_back(30);
  cout<<v.capacity()<<endl;//it can assign 4 spaces total of elements

  cout<<v.size()<<endl;//actual size of elements

  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }

  cout<<endl;

  v.clear();
  cout<<"After Clear Function:"<<endl;
   for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}