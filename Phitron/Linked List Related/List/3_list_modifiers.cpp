#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int> mylist={1,2,3};
  cout<<"Assign"<<endl;
  list<int> newlist;

  // newlist = mylist;type 1
  //type 2:
  newlist.assign(mylist.begin(), mylist.end());

  for(int value: newlist)
  {
    cout<<value<<endl;
  }

  cout<<"Insert At Tail: "<<endl;
  newlist.push_back(100);
  for(int value: newlist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Second: "<<endl;
  list<int> mylist1={1,2,3};
  mylist1.push_back(100);
  for(int value: mylist1)
  {
    cout<<value<<endl;
  }
  cout<<endl<<"Insert At Front: "<<endl;
  newlist.push_front(150);
  for(int value: newlist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Second: "<<endl;
  
  mylist1.push_front(150);
  for(int value: mylist1)
  {
    cout<<value<<endl;
  }
  cout<<endl<<"Delete from Tail: "<<endl;
  newlist.pop_back();
  for(int value: newlist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Second: "<<endl;
  
  mylist1.pop_back();
  for(int value: mylist1)
  {
    cout<<value<<endl;
  }
  cout<<endl<<"Delete at front: "<<endl;
  newlist.pop_front();
  for(int value: newlist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Second: "<<endl;
  
  mylist1.pop_front();
  for(int value: mylist1)
  {
    cout<<value<<endl;
  }
  return 0;
}