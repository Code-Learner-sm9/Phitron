#include<bits/stdc++.h>
using namespace std;
class students{
    public:
    string name;int age;
    students(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
int main()
{
    students* rakib=new students("Rakib Mollah",23);
    students* sakib=new students("Sakib Mollah",22);

    //now if we want to copy sakibs information to rakib then we have
    //to use this pointer or normal pointer .we cant write
    //rakib = sakib as we wrote in the prev strings.
    //if we delete sakib then rakib that is indicated sakib address values
    //will be deleted
    //for normal string its good that is static.


    //but for dynamic object we have to introduce the address in which
    //the value that we copies to move.
    

    //Way 1 : Using this pointer
    // cout<<"Way 1: Using this Pointer:";

    rakib->name=sakib->name;
    rakib->age=sakib->age;
    delete sakib;
    //now to see rakib information
    cout<<rakib->name<<" "<<rakib->age<<endl;

    //Way 2: Using * pointer

    // cout<<"Way 2: Using * Pointer:";
    // *rakib=*sakib;
    // delete sakib;
    // cout<<rakib->name<<" "<<rakib->age<<endl;



    // cout<<rakib->name<<" "<<rakib->age<<endl;
    // cout<<sakib->name<<" "<<sakib->age<<endl;
    return 0;
}