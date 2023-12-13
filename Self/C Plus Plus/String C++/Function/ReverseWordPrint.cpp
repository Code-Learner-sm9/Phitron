//Function and reference using ampersand sign
// #include<bits/stdc++.h>
// using namespace std;
// void print(string s)
// {
//     s="World";
// }
// int main()
// {
//     string s;
//     s="hello";
//     print(s);
//     cout<<s;
//     return 0;
// }
//as we print function that is we send only values it wont change
//if we change values the address of that variable that contains previous
//address wont change .because we just send string s.means it value
//not its address.if we have to change values we have to send address
//of that variable not value.



//but if we send address and we can anything in the function the value
//of that address will change and to do that we can use &(ampersand) sign
//here ampersand sign use as a pointer.we used *(for array).
//but here in string & will work here not * . 
// #include<bits/stdc++.h>
// using namespace std;
// void print(string & s)
// {
//     s="World";
// }
// int main()
// {
//     string s;
//     s="hello";
//     print(s);
//     cout<<s;
//     return 0;
// }


//For Reverse Word print

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     stringstream ss(s);
//     string word;
//     while(ss>>word)
//     {
//         cout<<word<<endl;
//     }
//     return 0;
// }



//to print these words reversely in recursion
//if we use stringstream in function.we have to always put &(ampersand)
//sign.
#include<bits/stdc++.h>
using namespace std;
void print(stringstream& sw)
{
    string word;
    if(sw>>word)
    {
        print(sw);//if we do this it will print reversely
        cout<<word<<endl;
        // print(sw);//if we do this it will print normally
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}