#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int original=n;
    int a=0;
    float sum=0;
    while(n>0)
    {
      a=n%10;
      cout<<a<<" "<<endl;
      sum+=pow(a,3);
      n=n/10;
    }
    // sum=ceil(sum);
    if(sum == original)
    {
      cout<<original<<" is Armstrong Number."<<endl;
    }
    else
    {
      cout<<original<<" is not Armstrong Number."<<endl;
    }

    return 0;
}