#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll,cls;
    char name[100];
    char section;

    student(int r,int c,char* nm,char s)
    {
        roll=r;
        cls=c;
        strcpy(name,nm);
        section=s;
    }

};
int main()
{
    student rahim(29,7,"Rahim Uddin",'A');
    student Karim(34,8,"Karim Uddin",'B');

    cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.section<<endl;
    cout<<Karim.name<<" "<<Karim.roll<<" "<<Karim.cls<<" "<<Karim.section<<endl;
    
    return 0;
}