#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;//string dynamically string character store kore
    int age;

    int marks1,marks2;
    Student(string nm,int a,int ma1,int ma2)
    {
        name = nm;
        age = a;
        marks1=ma1;
        marks2=ma2;
    }
    void func()
    {
        //I can call name and age of Person1 from this func() without using 
        //Person1.age,Person1.name directly.
        // cout<<"From Func Funtion"<<endl;
        // cout<<name<<" "<<age<<endl;

        // cout<<"Hello I am inside class"<<endl;
        // Student Person2("Karim Ullah",24);
        // cout<<Person2.name<<" "<<Person2.age<<endl;
    }
    // void total_marks()
    // {
    //     cout<< marks1+marks2;
    // }
    int total_marks()
    {
        return marks1+marks2;
    }

};
int main()
{
    Student Person("Rahim Ullah",25,30,40);
    Person.func();

    cout<<endl;
    cout<<endl;
    cout<<"Inside Main Function"<<endl;
    cout<<Person.name<<endl;
    cout<<Person.age<<endl;

    cout<<"Marks:"<<endl;
    // Person.total_marks();

    cout<<Person.total_marks();
    


    return 0;
}