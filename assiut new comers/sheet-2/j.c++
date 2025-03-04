// Primes from 1 to n
#include <bits/stdc++.h>
#include <iostream>

using namespace std;


bool is_prime(int n)
{
  bool is_prime = true;

  if (n == 2)
  {
    return is_prime;
  }

  if (n % 2 == 0)
  {
    is_prime = false;
    return is_prime;
  }

  for (int i = 3; i < n; i += 2)
  {
    if (n % i == 0)
    {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

int main()
{
  int n;
  cin >> n;

  for (int i = 2; i <= n; i++)
  {
    if(is_prime(i)) {
      cout<<i<<" ";
    }
  }

  return 0;
}