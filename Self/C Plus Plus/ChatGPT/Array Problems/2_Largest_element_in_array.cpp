#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int Largest=INT_MIN;

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
      if(arr[i]>Largest)
      {
        Largest=arr[i];
      }
    }

    cout<<"Largest Element: "<<Largest<<endl;

    return 0;
}