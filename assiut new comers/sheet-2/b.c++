// Even Numbers
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n == 1)
  {
    cout << -1 << endl;
    return 0;
  }
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << endl;
    }
  }

  return 0;
}