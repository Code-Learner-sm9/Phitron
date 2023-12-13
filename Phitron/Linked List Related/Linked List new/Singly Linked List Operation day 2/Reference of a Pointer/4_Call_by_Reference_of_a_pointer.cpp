#include<bits/stdc++.h>
using namespace std;
// void Reference_Of_a_pointer(int *p)
void Reference_Of_a_pointer(int * &p)
//amra * &p newa mane akhn p ar ptr same adress or same variable
// but ager code a kinto same chilo na.akhn akhane p kei change korle oikhane
// ptr change hobe kosto dereference kora lagbe na.karon ata ke amra deference korei niye 
//ashci
{
  
  cout<<&p<<endl;
  p=NULL;


}
int main()
{
  int val=10;
  int *ptr=&val;
  Reference_Of_a_pointer(ptr);
  cout<<&ptr<<endl;
  cout<<ptr<<endl;//ptr address show kore variable val ar jeheto amra p ke NULL kore disi tai 
  //address 0 dekahbe
  cout<<*ptr<<endl;//error dibe noyto kisoi dekhabe na karon jeheto address 0 so akhane
  //kono value thakbe na.
  cout<<val<<endl;//same akhaneo

  //ai operation ta shudu matro adress ke NULL kora niye.jodi value change korte chai
  //tahole normal je reference ar niyom oivabe korlei hobe.
  
  
  return 0;
}