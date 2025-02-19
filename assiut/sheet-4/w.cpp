#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

  int q;
  cin >> q;

  string s;
  cin >> s;

  int idx;

  if (q == 1)
  {
    for (int i = 0; i < s.size(); i++)
    {
      idx = original.find(s[i]);
      s[i] = key[idx];
    }
  }
  else
  {
    for (int i = 0; i < s.size(); i++)
    {
      idx = key.find(s[i]);
      s[i] = original[idx];
    }
  }

  cout<<s;

  // can do it without string manipulation (print char by char)

  return 0;
}