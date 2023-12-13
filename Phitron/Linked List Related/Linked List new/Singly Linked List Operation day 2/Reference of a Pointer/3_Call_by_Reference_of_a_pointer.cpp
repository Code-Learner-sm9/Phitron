#include<bits/stdc++.h>
using namespace std;
// void Reference_Of_a_pointer(int *p)
void Reference_Of_a_pointer(int * p)
{
  // p=NULL;//p ar man NULL kora mane p jeheto address bujay tahole 
  // //ki ptr o NULL hoye jabe. ans: hobe na.coz p ar ptr different 
  // //variable same var na.amra p ke direffernce kore value change korte pari but 
  // //direct ata address ke NULL korte parbo na..adrres ke NULL kora mane ar vitor
  // //je value ,adrrs shob chole jabe

  // *p=NULL;
  cout<<&p<<endl;


}
int main()
{
  int val=10;
  int *ptr=&val;
  

  Reference_Of_a_pointer(ptr);
  // cout<<*ptr<<endl;

  //jeheto p NULL korar poreo 10 print hocce so kono change hoy nai.tahole
  //amra jodi change korte chai je akhaner ptr oi function ar p same variable hishebe
  //kaj korbe tahole p = NULL na likhe jodi deference kori tahole change hobe kind of
  //*P =NULL aita akta..arekta niyom next code ae..
  cout<<&ptr<<endl;
  //akhane &ptr ar & p ar address same na mane ara different variable.
  
  return 0;
}