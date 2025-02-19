#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int score = 0;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'V')
    {
      score += 5;
    }
    else if (s[i] == 'W')
    {
      score += 2;
    }
    else if (s[i] == 'X')
    {
      i++;
    }
    else if (s[i] == 'Y')
    {
      if (i + 1 < s.size())
      {
        s.push_back(s[i + 1]);
        i++;
      }
    }
    else if (s[i] == 'Z')
    {
      if (s[i + 1] == 'V')
      {
        score /= 5;
        i++;
      }
      else if (s[i + 1] == 'W')
      {
        score /= 2;
        i++;
      }
    }
  }

  cout << score;

  return 0;
}