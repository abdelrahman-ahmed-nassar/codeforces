#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll max_num(ll n, ll mx)
{
  ll k = 0;
  cin >> k;
  if (n <= 0)
  {
    return mx;
  }

  if (k > mx)
  {
    mx = k;
  }

  return max_num(n - 1, mx);
}

void solve()
{
  ll n;
  cin >> n;

  cout << max_num(n, INT_MIN);
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

/*K. Max Number
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.

Example
InputCopy
5
1 -3 5 4 -6
OutputCopy
5*/