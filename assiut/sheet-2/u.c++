#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0;
  int dSum = 0;

  for (int i = 1; i <= n; i++)
  {
    int x = i;
    dSum = 0;

    // check condition
    while (x > 0)
    {
      dSum += x % 10;
      x /= 10;
    }

    if (dSum >= a && dSum <= b)
    {
      sum += i;
    }
  }

  cout<<sum;

  return 0;
}