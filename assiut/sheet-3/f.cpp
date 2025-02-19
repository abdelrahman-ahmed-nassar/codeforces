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
    cin >> arr[n - 1 - i];
  }

  for (int i : arr)
  {
    cout << i << " ";
  }

  return 0;
}