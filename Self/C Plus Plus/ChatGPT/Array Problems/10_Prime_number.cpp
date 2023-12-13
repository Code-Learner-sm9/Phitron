#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int isPrime=0;

    for(int i=2;i<n;i++)
    {
      if(n%i==0)
      {
        isPrime=1;
        break;
      }
    }

    if(isPrime==0)
    {
      cout<<n<<" is Prime"<<endl;
    }
    else
    cout<<n<<" is not Prime"<<endl;
    return 0;
}