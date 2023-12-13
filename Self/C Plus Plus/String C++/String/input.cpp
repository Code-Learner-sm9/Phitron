#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///
    // string s="Hello World";// string s diye direct initialize korle
    // //space soho input newa jay.
    // cout<<s<<endl;

    ///
    // string s1;
    // cin>>s1;
    // //s1="hello World" space soho input nile just Hello ashbe
    // //space ar porer part ashbe na
    // cout<<s1<<endl;


    ///
    //To get rid of this problem
    string s2;
    getline(cin,s2);
    cout<<s2<<endl;


    ///
    //but there is a problem with getline that 
    //if i declare an integer and then take string then it wont show me
    //the string such as:
    // int n;
    // cin>>n;

    // string s3;getline(cin,s3);cout<<s3<<endl;

    ///
    //to get rid of this problem we can take cin.ignore() function
    //to avoid this problem
    
    // cin.ignore();//In some ide this function dont work
    
    int n;
    cin>>n;
    getchar();
    // cin.ignore();
    string s;
    getline(cin,s);
    cout<<n<<endl;
    cout<<s<<endl;


    return 0;
}