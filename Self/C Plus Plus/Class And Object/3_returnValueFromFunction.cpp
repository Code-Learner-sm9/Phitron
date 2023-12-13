//RVO method-Return Value Optimization
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll,cls;
    char name[100];
    char section;

    Student(int r,int c,char s,char* nm)//Constructor
    {
        roll=r;
        cls=c;
        section=s;
        strcpy(name,nm);
    }

};
//Student Function.Here data type should be Student that is the name of
//the function which is name after class.Here class student.
Student fun()
{
    char name[100]="Rahim Uddin";
    Student rahim(29,7,'A',name);//it will call the constructor.
    return rahim;
    
}
int main()
{
    Student rahim=fun();

    cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.section<<endl;
    
    return 0;
}