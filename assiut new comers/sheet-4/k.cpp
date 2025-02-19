// I Love strings
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  string a, b;

  for (int z = 0; z < t; z++)
  {
    cin >> a >> b;

    int n = min(a.size(), b.size());
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << b[i];
    }

    if (a.size() > b.size())
    {
      cout << a.substr(n);
    }
    else
    {
      cout << b.substr(n);
    }
    cout << endl;
  }

  return 0;
}