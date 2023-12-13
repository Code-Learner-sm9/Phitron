// Question 2: Write a C++ program
//  that calculates the sum of all the elements in a vector of integers.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a;
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    a.push_back(x);
  }

  int sum = 0;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
  }

  cout<<"Sum: "<<sum<<endl;
  return 0;
}