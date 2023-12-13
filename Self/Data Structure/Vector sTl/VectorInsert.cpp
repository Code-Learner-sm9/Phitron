#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,12,14,16,18,20};
    v.insert(v.begin()+3,20);
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}