#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    if(arr[i] == 0) {
      for (int j = 0; j < (i / 2); j++)
      {
        int temp = arr[j];
        arr[j] = arr[i-1-j];
        arr[i-1-j] = temp;
      }
    }
  }
  

  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  

  return 0;
}