#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sum_all(ll n, ll sum)
{
  ll k = 0;
  cin >> k;
  if (n <= 0)
  {
    return sum;
  }

  sum += k;
  return sum_all(n - 1, sum);
}

void solve()
{
  ll n;
  cin >> n;

  cout << sum_all(n, 0);
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

/*L. Summation
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the summation of the array elements.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the summation of the N numbers.

Examples
InputCopy
4
1 4 2 7
OutputCopy
14
InputCopy
4
5 5 5 5
OutputCopy
20

*/