#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll,cls;
    char section;

};
int main()
{
    student rahim;
    rahim.roll=34;
    rahim.cls=9;
    rahim.section='B';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);

    student Karim;
    Karim.roll=35;
    Karim.cls=9;
    Karim.section='B';
    char nm2[100]="Karim Uddin";
    strcpy(Karim.name,nm2);

    cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.section<<endl;
    cout<<Karim.name<<" "<<Karim.roll<<" "<<Karim.cls<<" "<<Karim.section<<endl;
    return 0;
}