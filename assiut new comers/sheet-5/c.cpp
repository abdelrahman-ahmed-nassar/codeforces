// Wonderful Number
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool is_odd(int n)
{
  return (n % 2 != 0);
}

bool palindrome_binary(int n)
{
  // create a string of the binary representation
  string s = "";
  int rem;

  while (n > 0)
  {
    rem = n % 2;

    if (rem == 0)
    {
      s += '0';
    }
    else
    {
      s += '1';
    }
    n /= 2;
  }

  bool is_palindrome = true;

  int z = s.length();

  for (int i = 0; i < z; i++)
  {
    if (s[i] != s[z - 1 - i])
      is_palindrome = false;
  }

  return is_palindrome;
}

int main()
{
  int n;
  cin >> n;

  cout << ((palindrome_binary(n) && is_odd(n)) ? "YES" : "NO");
  return 0;
}