//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    if(s <= '9' && s >= '0')
    {
        cout<<"IS DIGIT";
    }
    else if(s <= 'z' && s >= 'a')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if(s <= 'Z' && s >= 'A')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    return 0;
}