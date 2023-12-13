#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    bool isPalindrome=true;

    for(int i=0;i<n;i++)
    {
      if(arr[i]!=arr[n-i-1])
      {
        isPalindrome=false;
      }
    }

    // if(isPalindrome==true)
    if(true)//we can write just true
    {
      cout<<"Palidrome";
    }
    else
    {
      cout<<"Not Palindrome";
    }
    return 0;
}