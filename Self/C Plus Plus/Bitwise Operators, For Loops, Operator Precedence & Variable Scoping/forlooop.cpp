#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //case1:
    // for(int i=1;i<=n;i++)
    // {
    //   cout<<i<<endl;
    // }

    // case2:
    // int i=1;
    // for(;i<=n;)
    // {
    //   cout<<i<<endl;
    //   i++;
    // }

    // case3:
    // int i=1;
    // for(;;)
    // {
    //   if(i<=n)
    //   {
    //   cout<<i<<endl;
    //   }
    //   else 
    //   {
    //   break;
    //   }
    //   i++;
    // }

    // case4:Multiple condition:
    // for(int a=0,b=1;a<=0 && b>=1;a--,b--)
    // {
    //   cout<<a<<" "<<b<<endl;;
    // }

    // case4:Sum:
    // int sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //   // sum=sum+i;
    //   sum+=i;
    //   cout<<"Counting Sum of "<<i<<" is: "<<sum<<endl;
    // }
    // cout<<"Total Sum: "<<sum<<endl;

    // case5:Fibonacci Numbers:
    // int first=0;int second=1;
    // int next;
    // cout<<first<<endl<<second<<endl;

    // for(int i=2;i<n;i++)
    // {
    //   next=first+second;
    //   cout<<next<<endl;
    //   first=second;
    //   second=next;
    // }

    // case6:Prime Number:
    int flag=0;
    for(int i=2;i<n;i++)
    {
      if(n%i==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
      cout<<n<<" is Prime Number.";
    }
    else
    {
      cout<<n<<" is not Prime Number.";
    }


    return 0;
}