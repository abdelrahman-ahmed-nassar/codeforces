#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;

  cin>>n;

  int arr[n];

  int freq[1005] = {0};

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // freq

  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;
  }

  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    if (freq[arr[i] + 1] >= 1)
    {
      sum++;
    }
  }

  cout << sum;

  return 0;
}