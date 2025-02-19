#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int costs[26] = {0};

int cost(char c)
{
  return costs[c - 'a'];
}

int cost_diff(char a, char b)
{
  return abs(cost(a) - cost(b));
}

char min_cost_character(char a, char b)
{

  int valA = cost(a);
  int valB = cost(b);

  char min = 26;

  for (int i = 0; i < 26; i++)
  {
    if (costs[i] == valA || costs[i] == valB)
    {
      if (i < min)
      {
        min = i;
      }
    }
  }
  return (char)(min + 'a');
}

int main()
{
  string s;
  cin >> s;

  int min_cost = INT_MAX;
  for (int i = 0; i < 26; i++)
  {
    int z;
    cin >> z;
    costs[i] = z;
    if (z < min_cost)
    {
      min_cost = z;
    }
  }

  int right, left;
  int n = s.size();
  int total_cost = 0;

  bool first_occur = true;

  if (n == 1)
  {
    cout << min_cost << endl;
    if (s[0] != '?')
    {
      cout << min_cost_character(s[0], s[0]);
    }
    else
    {
      char min_char = 'z';
      for (int i = 0; i < 26; i++)
      {
        if (costs[i] == min_cost)
        {
          if ((char)(i + 'a') < min_char)
          {
            min_char = char(i + 'a');
          }
        }
      }
      cout << min_char;
    }
    return 0;
  }

  for (int i = 1; i < n; i++)
  {
    if (i == n - 1 && s[n - 1] == '?')
    {
      if (s[i - 1] == '?')
      {
        left = n - 1;
        char rightChar = s[right - 1];
        char leftChar = s[left + 1];
        char replacer = min_cost_character(rightChar, rightChar);
        s.replace(right, left - right + 1, left - right + 1, replacer);
      }
      else
      {
        s[n - 1] = min_cost_character(s[n - 2], s[n - 2]);
      }
    }

    if (i == 1 && s[0] == '?')
    {
      right = 0;
      first_occur = false;
    }

    if (first_occur)
    {
      if (s[i] == '?')
      {
        first_occur = false;
        right = i;
      }
    }
    else
    {
      if (s[i] != '?')
      {
        first_occur = true;
        left = i - 1;
        char rightChar = s[right - 1];
        char leftChar = s[left + 1];
        char replacer = min_cost_character(leftChar, rightChar);
        s.replace(right, left - right + 1, left - right + 1, replacer);
      }
    }
  }

  for (int i = 1; i < n; i++)
  {
    total_cost += cost_diff(s[i], s[i - 1]);
  }

  cout << total_cost << endl;
  cout << s;

  return 0;
}