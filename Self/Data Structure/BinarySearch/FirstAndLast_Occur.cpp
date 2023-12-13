// //First and Last Position of an Element In Sorted Array
// //https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include<bits/stdc++.h>
using namespace std;
int binarySearchFirst(int *arr,int size,int num)
{
  int start=0;
  int end=size-1;
  int ans=-1;

  while(start<=end)
  {
    int mid=start+(start+end)/2;
    if(arr[mid]==num)
    {
      ans=mid;
      end=mid-1;
      //// Move to the left subarray to find the first occurrence
    }
    if(arr[mid]<num)
    {
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=start+(end-start)/2;
  }
  return ans;
}

int binarySearchLast(int *arr,int size,int num)
{
  int start=0;
  int end=size-1;
  int ans=-1;

  while(start<=end)
  {
    int mid=start+(end-start)/2;
    if(arr[mid]==num)
    {
      ans=mid;
      start = mid+1;
      // Move to the right subarray to find the last occurrence
    }
    if(arr[mid]<num)
    {
      start=mid+1;
    }
    else{
      end=mid+1;
    }
    mid=start+(start+end)/2;
  }
  return ans;
}


int main()
{
  int size;int key;cin>>size>>key;
  int arr[size];
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  int FirstIndex=binarySearchFirst(arr,size,key);
  int LastIndex=binarySearchLast(arr,size,key);

  cout<<FirstIndex<<" "<<LastIndex<<endl;
  return 0;
}















#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}