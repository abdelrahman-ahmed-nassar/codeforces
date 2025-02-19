// Lucky Numbers
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  bool isLucky;
  int luckyCounter = 0;

  for (int i = min(a, b); i <= max(a, b); i++)
  {
    isLucky = true;
    string s = to_string(i);

    for (int j = 0; j < s.length(); j++)
    {
      if (s[j] != '4' && s[j] != '7')
      {
        isLucky = false;
      }
    }
    
      if (isLucky)
      {
        luckyCounter++;
        cout << i << " ";
      }
  }

  if (luckyCounter == 0)
  {
    cout << -1;
  }

  return 0;
}