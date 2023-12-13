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
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(all[i].marks > all[j].marks)
            {
                swap(all[i],all[j]);
            }
        }
    }
    cout<<"Sorting in Ascending for marks:"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<all[i].name<<" "<<all[i].roll<<" "<<all[i].marks<<endl;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(all[i].marks < all[j].marks)
            {
                swap(all[i],all[j]);
            }
        }
    }
    cout<<"Sorting in descending for marks:"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<all[i].name<<" "<<all[i].roll<<" "<<all[i].marks<<endl;
    }
    return 0;
}

