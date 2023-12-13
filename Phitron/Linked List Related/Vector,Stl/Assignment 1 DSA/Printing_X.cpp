#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r,c;
    for(r=0;r<n;r++)
    {
      for(c=0;c<n;c++)
      {
        if(r==n/2 && c==n/2)
        {
          cout<<"X";
        }
        if((r == c) && (r!=n/2 && c!=n/2) )
        {
        cout<<"\\";
        }
        else if((r+c)==(n-1) && (r!=n/2 && c!=n/2))
        {
          cout<<"/";
        }
        else
        {
          cout<<" ";
        }
        
        
      }
      cout<<endl;
    }
    return 0;
}