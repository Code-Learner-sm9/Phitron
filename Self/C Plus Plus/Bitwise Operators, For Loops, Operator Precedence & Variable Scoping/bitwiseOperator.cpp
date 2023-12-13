#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=3,b=4;

    cout<<"Bitwise Operator:"<<endl<<endl;
    cout<<"(AND)a&b:"<<(a&b)<<endl;
    cout<<"(OR)a|b:"<<(a|b)<<endl;
    cout<<"(NOT)~a:"<<~a<<endl;
    cout<<"(XOR)a^b:"<<(a^b)<<endl<<endl;


    cout<<"Left Shift && Right Shift:"<<endl;

    cout<<"Left Shift:17<<1->"<<(17<<1)<<endl;
    cout<<"Left Shift:17<<2->"<<(17<<2)<<endl;

    cout<<"Right Shift:19>>1->"<<(19>>1)<<endl;
    cout<<"Right Shift:21>>2->"<<(21>>2)<<endl<<endl;

    cout<<"Post & Pre Increment & Decrement:"<<endl;

    cout<<"Post Increment:"<<endl;
    int i=7;
    int j=i++;
    cout<<j<<endl;
    cout<<i<<endl;
    
    cout<<"Pre Increment:"<<endl;
    int k=7;
    int l=++k;
    cout<<l<<endl;
    cout<<k<<endl;

    cout<<"Post Decrement:"<<endl;
    int m=7;
    int n=m--;
    cout<<n<<endl;
    cout<<m<<endl;

    cout<<"Pre Decrement:"<<endl;
    int o=7;
    int p=--o;
    cout<<p<<endl;
    cout<<o<<endl;


    return 0;
}