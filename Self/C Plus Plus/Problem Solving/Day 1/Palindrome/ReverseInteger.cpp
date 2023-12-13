// #include<bits/stdc++.h>
// using namespace std;
// int reversedNum(int num)
// {
//     int reversed =0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         reversed=reversed*10+digit;
//         num =num/10;
//     }
//     return reversed;
// }
// int main()
// {
//     int num;cin>>num;
//     int reverse=reversedNum(num);
//     cout<<"Reversed Number: "<<reverse;
    
//     return 0;
// }

//Practice part 1

#include<bits/stdc++.h>
using namespace std;
int reversedNum(int num)
{
    int reversed= 0;

    while(num!=0)
    {
        int digit=num%10;
        reversed=reversed*10+digit;
        num=num/10;
    }
    return reversed;
}

int main()
{
    int n;cin>>n;

    int reversed= reversedNum(n);
    cout<<"Reversed Number: "<<reversed;
    return 0;
}