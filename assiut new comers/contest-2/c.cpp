// Finding Minimums

#include <bits/stdc++.h>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  int c = 0;
  int mn = INT_MAX;
  int temp;

  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    c++;

    if (temp < mn)
    {
      mn = temp;
    }

    if (c == k || i == n - 1)
    {
      cout << mn << " ";
      mn = INT_MAX;
      c = 0;
    }
  }

  return 0;
}