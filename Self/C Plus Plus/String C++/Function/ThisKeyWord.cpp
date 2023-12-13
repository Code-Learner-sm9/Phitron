#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;int age;
    Student(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void hello()
    {
        cout<<"Successfully Run!"<<endl;
        cout<<name<<" "<<age;
    }
};
int main()
{
    Student rahim("Rahim Ullah",23);
    cout<<rahim.name<< " " <<rahim.age<<endl;
    rahim.hello();
    return 0;
}