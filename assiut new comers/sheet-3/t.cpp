// T. Matrix

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  int arr[n][n];

  int mn = 0;
  int sc = 0;

  for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      int k;
      cin >> k;

      if (r == c)
      {
        mn += k;
      }
      if (c == n - 1 - r)
      {
        sc += k;
      }
    }
  }
  cout << abs(mn - sc);
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
