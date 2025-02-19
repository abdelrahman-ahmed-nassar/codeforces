// Hady Rides the Train

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long r = n / 4;
  long long c;

  if (r % 2 == 0)
  {
    c = (n % 4);
  }
  else
  {
    c = (4 - (n % 4)) - 1;
  }

  cout << r << " " << c;
  return 0;
}