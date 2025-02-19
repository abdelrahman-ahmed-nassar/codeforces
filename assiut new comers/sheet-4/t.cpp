// URL
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  string s;

  cin >> s;

  string q;
  string v;

  bool isQ = false;
  bool start = false;
  for (int i = 0; i < s.size(); i++)
  {

    if (s[i] == '?')
    {
      isQ = true;
      start = true;
      continue;
    }

    if (s[i] == '=')
    {
      isQ = false;
      cout << q << ": ";
      q = "";
      continue;
    }

    if (s[i] == '&')
    {
      isQ = true;
      cout << v << endl;
      v = "";
      continue;
    }

    if (i + 1 == s.size())
    {
      v += s[i];
      cout << v << endl;
    }

    if (isQ)
    {
      q += s[i];
    }

    if (!isQ && start)
    {
      v += s[i];
    }
  }

  return 0;
}