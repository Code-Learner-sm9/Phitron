//problem on codeforce:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int X,Y;
    cin>>X>>Y;
    long long int add=X+Y;
    long long int mul=X*Y;
    long long int sub=X-Y;
    cout<<X<<" + "<<Y<<" = "<<add<<endl;
    cout<<X<<" * "<<Y<<" = "<<mul<<endl;
    cout<<X<<" - "<<Y<<" = "<<sub<<endl;
    return 0;
 }