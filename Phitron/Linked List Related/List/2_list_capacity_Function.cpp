#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int> myli={10,20,30};

  // cout<<myli.max_size()<<endl;
  cout<<"Size: "<<myli.size()<<endl;

  for(int value: myli)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Resize: "<<endl;
  myli.resize(2);
  cout<<"Size: "<<myli.size()<<endl;

  for(int value: myli)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Resize: "<<endl;
  // myli.resize(5);
  myli.resize(5,100);
  cout<<"Size: "<<myli.size()<<endl;

  for(int value: myli)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"After clear: "<<endl;
  myli.clear();

  cout<<"Empty returns boolean true or false:if empty it returns 1 if not it returns 0."<<endl<<" Ans: "<<myli.empty()<<endl;

  cout<<"Size: "<<myli.size()<<endl;
  for(int value: myli)
  {
    cout<<value<<endl;
  }
  return 0;
}