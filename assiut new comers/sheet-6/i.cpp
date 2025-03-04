
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sumAll(ll n)
{
  return n * (n + 1) / 2;
}

void solve()
{
  long long a, b, x;
  cin >> a >> b >> x;

  long long mx = max(a, b);
  long long mn = min(a, b);

  ll n = sumAll(mx / x) - sumAll((mn-1) / x) ;

  cout << (x * n);
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
I. Divisability
time limit per test0.25 seconds
memory limit per test64 megabytes
Given three numbers A, B and X. Print the summation of numbers between A and B inclusive that are divisible by X.

Input
Only one line contains three numbers A, B and X (1 ≤ A, B ≤ 109, 1 ≤ X ≤ 109).

It's guaranteed that (0 ≤ |A - B| < 109).

Output
Print the answer required above.

Examples
InputCopy
5 20 5
OutputCopy
50
InputCopy
3 12 3
OutputCopy
30
Note
In the first example:

The numbers [5, 10, 15, 20] are dividable by 5 then the result: 5 + 10 + 15 + 20 = 50.
*/