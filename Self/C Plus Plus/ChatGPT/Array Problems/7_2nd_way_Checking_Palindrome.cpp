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

    int left=0;
    int right=n-1;

    while(left<right)
    {
      if(arr[left]!=arr[right])
      {
        isPalindrome=false;
        // break;we can use break statement.bcz if just one condition is not true that means its not palindrome
      }

      left++;
      right--;
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