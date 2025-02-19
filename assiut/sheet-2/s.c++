#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  int a, b, sum;

  for (int i = 0; i < t; i++)
  {
    cin >> a >> b;
    sum = 0;

    int mx = max(a, b);
    int mn = min(a, b);

    for (int i = mn + 1; i < mx; i++)
    {
      if (i % 2 != 0)
      {
        sum += i;
      }
    }
    cout << sum << endl;
  }

  return 0;
}