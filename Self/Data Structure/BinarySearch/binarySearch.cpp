#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int num)
{
  int start = 0;
  int end = size - 1;
  
  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == num)
    {
      return mid;
    }
    if (arr[mid] > num)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return -1;
}

int main()
{
    int even[6] = {2, 3, 5, 7, 9, 11};
    int odd[6] = {5,8,9,21,45,99};

    int indexEven = binarySearch(even, 6, 11);
    cout << "Index of number 11 is: " << indexEven << endl;

    int indexOdd = binarySearch(odd, 6, 5);
    cout << "Index of number 5 is: " << indexOdd << endl;
    return 0;
}
