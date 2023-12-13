#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
  cin>>n;
  int sum=n;
  // int temp=n;
  sum = sum % 10;
  while(n!=0)
  {  
    int digit = n%10;
    // cout<<digit<<endl;
    n=n/10;
    if(n==0)
    {
      sum=sum+digit;
    }
  }
  cout<<sum<<endl;
  }
  
  return 0;
}