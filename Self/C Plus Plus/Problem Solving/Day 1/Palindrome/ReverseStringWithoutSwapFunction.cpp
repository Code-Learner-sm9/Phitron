#include<bits/stdc++.h>
using namespace std;
string reversedString(string &str)//it'll be fine if i write just str 
{
    int length= str.length()-1;
    int mid=length/2;

    for(int i=0;i<mid;i++)
    {
        char temp=str[i];
        str[i]=str[length-i];
        str[length-i]=temp;
    }
    return str;
}
int main()
{
    string s;
    getline(cin, s);

    string s2=reversedString(s);
    cout<<"Reversed String: "<<s2;


    return 0;
}