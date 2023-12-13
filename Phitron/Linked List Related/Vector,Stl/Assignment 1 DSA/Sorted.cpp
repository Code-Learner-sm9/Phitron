#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin >> q;
  while (q--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    int sorted = 1;
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (arr[i] > arr[j])
        {
          sorted = 0;
          break;
        }
      }
    }
    if (sorted == 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}