#include<bits/stdc++.h>
using namespace std;
void Reference_Of_a_pointer(int *p)
{
  *p= 20;//ptr jeheto val variable ar adr ke point kore amra 
  //function a ptr dilam jeta ai function p name new akta variable
  //a address pass korbe ptr val variable ar.
  //akhn p ke dereference kore value change korlei val ar value change 
  //hobe same vabe ptr jeteho val ke equal korechi tai ar o value change
  //hobe
}
int main()
{
  int val=10;
  int *ptr=&val;
  //ptr pointer ar moddhe val variable ar address rakhlam
  cout<<ptr<<endl;//adress dekhabe

  cout<<&val<<endl;//addree same ptr ar moto hobe bcz we write *ptr=&val

  cout<<*ptr<<endl;//value dekhabe val ar.karon amra dereferece korse

  Reference_Of_a_pointer(ptr);
  cout<<*ptr<<endl;
  cout<<val<<endl;
  



  
  return 0;
}