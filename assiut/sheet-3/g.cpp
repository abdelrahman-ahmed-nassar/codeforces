#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];


  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

    bool isP = true;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] != arr[n - 1 -i] ) {
        isP = false;
      }
    }

  cout<<(isP ?  "YES" : "NO");


  return 0;
}