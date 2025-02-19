#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  bool is = true;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != s[s.size() - 1 - i])
    {
      is = false;
    }
  }

  cout << (is ? "YES" : "NO");

  return 0;
}