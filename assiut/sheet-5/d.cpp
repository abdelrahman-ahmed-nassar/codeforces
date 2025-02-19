#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool is_prime(int n)
{
  if (n <= 1)
  return false;


  if (n == 2)
  {
    return true;
  }

  if (n % 2 == 0)
  {
    return false;
  }

  // for (int i = 3; i * i <= n; i++)
  for (int i = 3; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  

  return true;
}

int main()
{
  int t, n;

  cin >> t;

  while (t--)
  {
    cin >> n;
    cout << (is_prime(n) ? "YES" : "NO") << endl;
  }

  return 0;
}

////////
// prime in different way
///////