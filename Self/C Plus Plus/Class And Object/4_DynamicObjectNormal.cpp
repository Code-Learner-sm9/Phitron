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
    char nm[100]="Rahim Ullah";
    // student rahim;//normal declaration

    //Dynamic Object Declaration
    student* rahim=new student;

    //Using this pointer (->)

    rahim->roll=34;
    (*rahim).roll=35;//Alternative way
    rahim->cls=9;
    rahim->section='B';
    strcpy(rahim->name,nm);

    cout<<"Alternative Way: ";
    cout<<"Get value by Dereferencing: ";
    (*rahim).roll=34;
    (*rahim).cls=9;
    (*rahim).section='B';
    strcpy((*rahim).name,nm);

    cout<<rahim->name<<" "<<rahim->roll<<" "<<rahim->cls<<" "<<rahim->section<<endl;
    cout<<(*rahim).name<<" "<<(*rahim).roll<<" "<<(*rahim).cls<<" "<<(*rahim).section<<endl;

    cout<<"After Deletion:";//may show garbage value
    delete rahim;
    cout<<rahim->name<<" "<<rahim->roll<<" "<<rahim->cls<<" "<<rahim->section<<endl;


    //in dynamic array we used to do:
    cout<<"In case of Dynamic Array: ";
    int *a =new int[100];
    //We put the value into a using dereference method.
    *a=10;
    cout<<"Show Memory address: "<<a<<endl<<"Show value:"<<*a;


    return 0;
}