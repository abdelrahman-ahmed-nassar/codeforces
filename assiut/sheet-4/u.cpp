#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int e = 0, g = 0, y = 0, p = 0, t = 0;

  for (int i = 0; i < s.size(); i++)
  {
    char el = s[i];
    if (el == 'e' || el == 'E')
    {
      e++;
    }
    else if (el == 'g' || el == 'G')
    {
      g++;
    }
    else if (el == 'y' || el == 'Y')
    {
      y++;
    }
    else if (el == 'p' || el == 'P')
    {
      p++;
    }
    else if (el == 't' || el == 'T')
    {
      t++;
    }
  }

  cout << min({e, g, y, p, t});

  return 0;
}