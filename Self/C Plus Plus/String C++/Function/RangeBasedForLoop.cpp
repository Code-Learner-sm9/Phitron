#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //With this iterator we can find index plus values
    for(int i=0;i<s.size();i++)
    {
        cout<<"Index:"<<i<<" "<<"Value:"<<s[i]<<endl;
    }

    //with this shortcut iterator we can find only values not index.
    for(char c:s)
    {
        cout<<"Values Only: "<<c<<endl;
    }


    return 0;
}