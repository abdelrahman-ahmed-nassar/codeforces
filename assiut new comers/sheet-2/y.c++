// Easy Fibonacci
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    /* code */

    if (i == 1)
    {
      cout << 0 << " ";
      continue;
    }

    if (i == 2)
    {
      cout << 1 << " ";
      continue;
    }

    int temp = 0;
    int cur = 1;
    int prev = 0;

    for (int j = 3; j <= i; j++)
    {
      temp = cur + prev;
      prev = cur;
      cur = temp;
    }
    cout << temp << " ";
  }

  return 0;
}