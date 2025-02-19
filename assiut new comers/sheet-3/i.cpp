// Smallest Pair
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        int temp = arr[i] + arr[j] + j - i;
        if (temp < min)
        {
          min = temp;
        }
      }
    }
    cout << min<<endl;
  }
  return 0;
}