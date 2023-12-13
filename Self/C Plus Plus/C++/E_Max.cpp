// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mx;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    //max() function is used to find larger value from 2 values only
    //but to find the larger value from many elements we use max_element function.
    
    mx=*max_element(ar,ar+n);
    cout<<mx;
    return 0;
}
