// Compare
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;

  int n = min({a.length(), b.length()}) + 1;

  int winner = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] < b[i])
    {
      winner = 0;
      break;
    }
    if (b[i] < a[i])
    {
      winner = 1;
      break;
    }
  }

  cout << (winner ? b : a);

  return 0;
}