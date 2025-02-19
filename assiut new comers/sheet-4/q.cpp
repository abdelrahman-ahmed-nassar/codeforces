// Reverse Words
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  string s;
  getline(cin, s);

  string temp = "";

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != ' ')
    {
      temp += s[i];
    }

    if (s[i] == ' ' || (i == s.size() - 1))
    {
      for (int i = 0; i < temp.size(); i++)
      {
        cout << temp[temp.size() - 1 - i];
      }
      if (i != s.size() - 1)
        cout << " ";
      temp = "";
    }
  }
  cout << temp;

  return 0;
}