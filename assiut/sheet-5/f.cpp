#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int x, n;
  cin >> x >> n;

  long long sum = 0;

  for (int i = 2; i <= n; i += 2)
  {
    sum += pow(x, i);
  }

  cout << sum;

  return 0;
}