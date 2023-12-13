// get out words from a sentence

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;

    // ss>>word;cout<<word<<endl;
    // ss>>word;cout<<word<<endl;
    // ss>>word;cout<<word<<endl;
    // ss>>word;cout<<word<<endl;
    // ss>>word;cout<<word<<endl;
    // ss>>word;cout<<word<<endl;

    // we iterate i through while loop
    // while(ss >> word)
    // {
    //     cout<<word<<endl;
    // }

    int cnt=0;
    //we can also count word
    while(ss>>word)
    {
        cnt++;
    }
    cout<<cnt;
    
    return 0;
}