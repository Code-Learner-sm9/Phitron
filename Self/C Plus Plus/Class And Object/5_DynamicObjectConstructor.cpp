#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    char section;
    int roll;
    int cls;

    student(int c,int r,int s,char* n)
    {
        cls=c;
        roll=r;
        section=s;
        strcpy(name,n);
    }

};
int main()
{
    char nam[100]="Rahim Ullah";
    student* rahim=new student(7,135,'B',nam);

    cout<<rahim->name<<" "<<rahim->roll<<" "<<rahim->cls<<" "<<rahim->section<<endl;

    
    return 0;
}