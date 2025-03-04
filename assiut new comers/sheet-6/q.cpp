#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  ll l, r, m;

  cin >> l >> r >> m;

  ll sum = 1;

  for (int i = l; i <= r; i++)
  {
    sum *= i;
    sum %= m;
  }
  cout << sum;
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

/*Q. Product
time limit per test1 second
memory limit per test256 megabytes
Given three numbers L
,R
 and M
. Print the product of all numbers from L
 to R
 (inclusive) module M
.

Input
Only one line contains three numbers L
, R
 and M
 (1≤L,R,M≤105)
.

It's guaranteed that (L≤R)
.

Output
Print the answer required above.

Example
InputCopy
1 20 10007
OutputCopy
8707*/