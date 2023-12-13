#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int target;cin>>target;

    vector<int> arr(n);

    for(auto &i : arr)
       cin>>i;

    sort(arr.begin(),arr.end());

    bool found=false;

    int left=0;
    int right=n-1;

    while(left<right)
    {
        int currentSum=arr[left]+arr[right];
        if(currentSum == target)
        {
            found=true;
            break;
        }
        else if(currentSum<target)
        {
            left++;
        }
        else{
            right--;
        }
    }
    if(found)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}