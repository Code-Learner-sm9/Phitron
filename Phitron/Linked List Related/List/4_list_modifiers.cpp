#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int> mylist={1,2,3,4,5};
  //list or linked list ae index kaj kore na . but imaginary index kaj kore. so mylist ar index 0 1 2 3 4
  cout<<"Insert Operation: O(n)"<<endl;
  //i want to insert 100 at 2 index.
  cout<<endl<<"Insert at Index 2: "<<endl;
  mylist.insert(next(mylist.begin(),2),100);

  //i want to insert 100 at 5 index.
  // mylist.insert(next(mylist.begin(),5),100);

  //i want to insert 100 at 6 index which is not available then it will round to cycle to index 0.

  // mylist.insert(next(mylist.begin(),6),100);//insert at 7,8,9 also round to index 1,2,3 etc.
  // but this can't you do as a fine programmer.
  for(int value: mylist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Erase At index 2: O(1) "<<endl;
  mylist.erase(next(mylist.begin(),2));
  for(int value: mylist)
  {
    cout<<value<<endl;
  }


  cout<<endl<<"Insert multiple value: "<<endl;
  mylist.insert(next(mylist.begin(),0),{100,200,400});
  for(int value: mylist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Erase At index 0: O(1) "<<endl;
  mylist.erase(next(mylist.begin(),0));
  mylist.erase(next(mylist.begin(),0));
  mylist.erase(next(mylist.begin(),0));
  for(int value: mylist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Insert multiple value from another list: "<<endl;
  list<int> newlist={70,80,90};
  mylist.insert(next(mylist.begin(),5),newlist.begin(),newlist.end());
  for(int value: mylist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Erase Multiple values index : O(1) "<<endl;
  mylist.erase(next(mylist.begin(),5),next(mylist.begin(),8));
 
  for(int value: mylist)
  {
    cout<<value<<endl;
  }

  cout<<endl<<"Insert multiple value from vector: "<<endl;
  vector<int> array={100,200,300};
  mylist.insert(next(mylist.begin(),0),array.begin(),array.end());
  for(int value: mylist)
  {
    cout<<value<<endl;
  }
  return 0;
}