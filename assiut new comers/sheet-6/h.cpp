#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  int a, b;
  cin >> a >> b;

  int mn = min(a, b);
  int mx = max(a, b);

  int mxD = INT_MIN;

  for (int i = 1; i < mn; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      if (i > mxD)
      {
        mxD = i;
      }
    }
  }
  cout << mxD << " ";
  cout << (abs(a * b) / mxD);
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
H. GCD
time limit per test1 second
memory limit per test256 megabytes
Given two numbers A and B. Print the GCD and LCM of A and B.

Note:

GCD is the greatest common divisor of A and B.
LCM is the least common multiple of A and B.
Input
Only one line contains two numbers A and B (1 ≤ A, B ≤ 2 * 109).

Output
Print the GCD and the LCM of A and B separated by a space.

Example
InputCopy
12 18
OutputCopy
6 36
Note
For more information about GCD visit : https://en.wikipedia.org/wiki/Greatest_common_divisor.

For more information about LCM visit : https://en.wikipedia.org/wiki/Least_common_multiple.


*/