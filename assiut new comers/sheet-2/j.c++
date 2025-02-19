// Primes from 1 to n
#include <bits/stdc++.h>
#include <iostream>

using namespace std;


bool isPrime(int n)
{
  bool isPrime = true;

  if (n == 2)
  {
    return isPrime;
  }

  if (n % 2 == 0)
  {
    isPrime = false;
    return isPrime;
  }

  for (int i = 3; i < n; i += 2)
  {
    if (n % i == 0)
    {
      isPrime = false;
      break;
    }
  }

  return isPrime;
}

int main()
{
  int n;
  cin >> n;

  for (int i = 2; i <= n; i++)
  {
    if(isPrime(i)) {
      cout<<i<<" ";
    }
  }

  return 0;
}