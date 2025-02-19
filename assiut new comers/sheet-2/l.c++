// GCD
#include <bits/stdc++.h>
#include <iostream>

using namespace std;



int main()
{
  int n, k;
  cin >> n >> k;

  int gcd = 1;

  int len = max({n, k});


  for (int i = 1; i <= len; i++)
  {
    if (n % i == 0 && k % i == 0)
    {
      if (i > gcd)
      {
        gcd = i;
      }
    }
  }
  cout << gcd;

  return 0;
}