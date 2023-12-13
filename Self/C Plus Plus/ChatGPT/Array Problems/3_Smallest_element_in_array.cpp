#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int Smallest=INT_MAX;

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
      if(arr[i]<Smallest)
      {
        Smallest=arr[i];
      }
    }

    cout<<"Smallest Element: "<<Smallest<<endl;
    
    return 0;
}