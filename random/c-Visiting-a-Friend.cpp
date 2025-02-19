#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t, f;
  cin >> t >> f;

  int c = 0;
  int s, e;

  for (int i = 0; i < t; i++)
  {
    cin >> s >> e;
    if (s > c)
    {
      cout << "NO";
      return 0;
    }
    else
    {
      c = max(c, e);
      if (c >= f)
      {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << (c >= f ? "YES" : "NO") << endl;

  return 0;
}