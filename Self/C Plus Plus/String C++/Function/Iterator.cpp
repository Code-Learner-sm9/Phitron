#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s="hello";
    // cout<<s.begin();//Will give error.this s.begin() is a private pointer
    //it shows memory address not value.
    cout<<*s.begin()<<endl;//to see the value of private we can dereference it

    cout<<"NUll:"<<endl;
    cout<<*s.end()<<endl;//It shows null value.the value after 'o'

    cout<<*(s.end()-1)<<endl;//to see previous value of null
    cout<<*(s.end()-2)<<endl;//to see previous value of null
    cout<<*(s.end()-3)<<endl;//to see previous value of null
    cout<<*(s.end()-4)<<endl;//to see previous value of null
    cout<<*(s.end()-5)<<endl;//to see previous value of null
    
    //normal iterator
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    //string iterator
    cout<<"Using Iterator outside of loop:"<<endl;
    string:: iterator i;
    for(i=s.begin();i<s.end();i++)
    {
        cout<<*i<<endl;
    }
    //Alternative
    //I can write string:: iterator in the loop directly
    cout<<"Using Iterator in Loop:"<<endl;
    for(string:: iterator i=s.begin();i<s.end();i++)
    {
        cout<<*i<<endl;
    }
    //Alternative
    //Or i can just write auto
    cout<<"Using Auto:"<<endl;
    for(auto i=s.begin();i<s.end();i++)
    {
        cout<<*i<<endl;
    }
    return 0;
}