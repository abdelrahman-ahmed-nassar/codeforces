#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sum_all(ll n, ll m, ll sum)
{
  ll k = 0;
  cin >> k;
  if (n <= 0)
  {
    return sum;
  }
  if (n <= m)
  {

    sum += k;
  }
  return sum_all(n - 1, m, sum);
}

void solve()
{
  ll n, m;
  cin >> n >> m;

  cout << sum_all(n, m, 0);
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

/*M. Suffix Sum
time limit per test1 second
memory limit per test256 megabytes
Given two numbers N
 and M
, and an array A
 of N
 numbers. Calculate the sum of the last M
 numbers.

Note: solve this problem using recursion.

Input
First line contains two numbers N
 and M
 (1≤M≤N≤105)
.

Second line contains N
 numbers (−109≤Ai≤109)
.

Output
Print the sum of the last M
 numbers of the given array.

Example
InputCopy
5 3
1 8 2 10 3
OutputCopy
15
*/