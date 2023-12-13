// #include<bits/stdc++.h>
// using namespace std;
// string reverseString(string str)
// {
//     int left=0;
//     int right = str.length()-1;

//     while(left<right)
//     {
//         swap(str[left],str[right]);
//         left++;
//         right--;
//     }
//     return str;
// }
// int main()
// {
//     string s;
//     getline(cin, s);

//     string s2=reverseString(s);

//     cout<<s2;
    
//     return 0;
// }

//Self Practice part 1:
#include<bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
    int left=0;
    int right=str.length()-1;

    while(left<right)
    {
        swap(str[left], str[right]);

        left++;
        right--;
    }
    return str;
}
int main()
{
    string s;
    getline(cin,s);
    string s2=reverseString(s);

    cout<<"Reversed String:"<<s2;
    return 0;
}
