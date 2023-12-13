//STL -> Standard Template Library
#include<bits/stdc++.h>
using namespace std;
int main()
{
  //dynamic Array
  // vector<int>a;

  // vector<int>a(5);//size we declared 5 and it assign 5 zeros in it

  // vector<int> a(5,1);//we can change the initial values into any number instead of just zeros

  //copy vector to vector
  // vector<int> a2(5,100);
  // vector<int> a(a2);//copy a2 vector into a vector


  // Construct a vector by copying all elements from a normal array A of size N.
  // int a2[6]={1,2,3,4,5,6};

  // vector<int> a(a2,a2+6);


  //direct Initialize 
  vector<int> a={2,199,32};
  for(int i=0;i<a.size();i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  int size=a.size();
  cout<<size<<endl;

  return 0;
}