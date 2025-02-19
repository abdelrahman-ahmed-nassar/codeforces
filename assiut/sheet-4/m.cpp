#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  bool exist = false;

  string s;
  cin >> s;

  int ln = s.length();

  string sub = "hello";

  if (sub.size() > s.size())
  {
    cout << "NO\n";
    return 0;
  }

  int c = 0;

  for (int i = 0; i < ln; i++)
  {
    if (s[i] == sub[c])
    {
      c++;
      if (c == (int)sub.size())
      {
        exist = true;
      }
    }
  }

  cout << (exist ? "YES" : "NO");

  return 0;
}