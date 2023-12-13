#include<bits/stdc++.h>
using namespace std;
void Value_of_a_Pointer(int val)
{
  val=20;
}
int main()
{
  int value=10;
  Value_of_a_Pointer(value);
  cout<<value;

  return 0;
}