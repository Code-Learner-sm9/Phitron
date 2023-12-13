#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s="helloworld";

    int length=s.size();
    cout<<length<<endl;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    s.clear();
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }

    string p;
    p="HelloWorld";
    cout<<p[0]<<" "<<p.back()<<endl;
    p.resize(5);//resize 5 korar por baki char gula chole jabe
    cout<<p<<endl;
    p.resize(8);//jeheto hello chara shob chole gese tai garbage value dekhabe
    cout<<p<<endl;
    p.resize(8,'x');//amra 5 ar pore onno value add korte pari
    cout<<p<<endl;
    return 0;
}