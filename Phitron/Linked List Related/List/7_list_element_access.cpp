#include<bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Access front and back value: "<<endl;
  list<int> mylist={1,2,3,4,5,6,7};
  cout<<mylist.front()<<" "<<mylist.back()<<endl;

  cout<<"Access any middle value: "<<endl;
  //Access 4
  cout<<*next(mylist.begin(),3)<<endl;
  return 0;
}