#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll factorial(ll n)
{
  if (n == 1 || n == 0)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

void solve()
{
  ll n;
  cin >> n;

  ll c = factorial(n);
  cout << c;
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

/*J. Factorial
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.

Example
InputCopy
5
OutputCopy
120

*/