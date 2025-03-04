#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void max_num(ll n, ll mx)
{
  ll k = 0;
  cin >> k;
  if (n <= 0)
  {
    return;
  }

  if (k > mx)
  {
    mx = k;
  }
  cout << mx << " ";

  return max_num(n - 1, mx);
}

void solve()
{
  ll n;
  cin >> n;

  max_num(n, INT_MIN);
  
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

/*Z. Left Max
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and an array A
 of N
 numbers, print the maximum in the range from 1
 to i
 for each i≤N
.

Note: Solve this problem using recursion.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (−109≤Ai≤109)
.

Output
Print N
 numbers, the maximum from index 1
 to index i
.

Example
InputCopy
5
4 3 5 7 3
OutputCopy
4 4 5 7 7 */