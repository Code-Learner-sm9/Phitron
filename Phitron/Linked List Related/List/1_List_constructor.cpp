//list holo linked list ar library
//ata use kore amra singly,doubly linked list ar kaj gula easily korte parbo.
//list index ney na plus ferot o dey na.just value access kora jay
#include<bits/stdc++.h>
using namespace std;
int main()
{
  // list<int> li;//O(1)
  // list<int> li(10);//O(n)
  // list<int> li(10,5);//O(n)

  // list<int> list1={1,2,3,4,5};
  // list<int> list2(list1);//O(n)

  // int array[5]={10,20,30,40,50};
  // list<int> listu(array,array+5);//O(n)

  vector<int> v={100,200,300};
  list<int> mylist(v.begin(),v.end());

  // cout<<li.front()<<endl;
  // cout<<li.back()<<endl;
  // cout<<li.size()<<endl;

  //Longcut
  for(auto it=mylist.begin();it!=mylist.end();it++)
  {
    cout<<*it<<endl;
  }
  cout<<endl;
  //shortcut
  for(int val:mylist)
  {
    cout<<val<<" ";
  }
  return 0;
}