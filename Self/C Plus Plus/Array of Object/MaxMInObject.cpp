#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    
};
int main()
{
    Student all[3];
    for (int i = 0; i < 3; i++)
    {
       
        // getline(cin, all[i].name);
        cin>>all[i].name;
        cin >> all[i].roll >> all[i].marks;
        // cin.ignore();
        getchar();
    }
    Student mx;
    mx.marks=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if(all[i].marks>mx.marks)
        {
            mx=all[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    Student mn;
    mn.marks=INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if(all[i].marks<mn.marks)
        {
            mn=all[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    return 0;
}

