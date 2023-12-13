#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello ";
    string s2="Gello";
    //s=s+s2;
    s+=s2;
    if(s==s2)
    {
        cout<<"same"<<endl;
    }else{cout<<"NO"<<endl;}
    cout<<s;
    cout<<endl;


    string m="World";
    m[4]='o';
    cout<<m<<endl;

    //write worldA

    string m1="hello";
    string m2="A";m1+=m2;cout<<m1<<endl;
    //Alternativee
    m1.push_back('B');
    cout<<m1<<endl;

    //Another
    m1.append("C");
    cout<<m1<<endl;

    //Pop
    m1.pop_back();
    cout<<m1<<endl;

    //Delete o from helloworld
    string p="HelloWorld";
    p.erase(4,1);
    cout<<p<<endl;

    //Delete all from o
    string p2="HelloWorld";p2.erase(4);
    cout<<p2<<endl;

    //Replace
    string p3="HelloWorld";
    p3.replace(5,5,"Gello");//first 5 is from h=0 to o=4 means 4 and W=5
    //so it will count before 5 means before w that is o
    //next 5 is from W=1 to d=5 and replace it with Gello
    cout<<p3<<endl;

    string p4="Helld";
    p4.replace(3,1,"Yoo");
    cout<<p4<<endl;

    //dont delete just replace
    string p5="OMilloSallo";
    p5.replace(6,0,"Sillo");
    cout<<p5<<endl;

    //Alternative of p5

    string p55="HelloVai";
    p55.insert(5,"Rahat");
    cout<<p55<<endl;

    return 0;
}