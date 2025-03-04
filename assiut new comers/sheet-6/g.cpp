// G. Summation of its divisors

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define ll long long

void solve()
{
  ll n;
  cin >> n;

  ll sum = 0;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      sum += i;
      if (i != sqrt(n))
      {
        sum += n / i;
      }
    }
  }
  cout << sum ;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout);

#endif
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  int T = 1;
  // cin >> T;

  while (T--)
  {
    solve();
  }
}

/*
G. Summation of its divisors
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the Summation of its divisors.

Input
Only one line contains a number N (1 ≤ N ≤ 1012).

Output
Print the answer required above.

Examples
InputCopy
12
OutputCopy
28
InputCopy
9
OutputCopy
13
Note
In the first example:

The divisors of 12 are [1, 2, 3, 4, 6, 12].

Then the result will be 1 + 2 + 3 + 4 + 6 + 12 = 28.

*/