#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    // Array of object banale constructor use kora jabe na
};
int main()
{
    int n;
    cin >> n;
    getchar();
    // cin.ignore();
    // integer input newar por amra je enter press kori
    // tokhn akta space ide nije theke niye ne.oite ignore korar jonnno
    // getchar() or cin.ignore() use korbo
    Student all[n];
    for (int i = 0; i < n; i++)
    {
        cin >> all[i].name; // cin diye name input nile space soho newa jabe na
        // getline(cin, all[i].name);
        // getline nile output a space niye problem kore

        cin >> all[i].roll >> all[i].marks;
        // cin.ignore();
        getchar();
    }
    for (int i = 0; i < n; i++)
    {
        cout << all[i].name << " " << all[i].roll << " " << all[i].marks << endl;
    }
    return 0;
}