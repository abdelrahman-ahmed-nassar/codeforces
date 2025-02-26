// O. Fibonacci

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  // 1 2 3 4 5 6 7 8
  // 0 1 1 2 3 5 8 13 21

  long long arr[n];

  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  cout << arr[n - 1];
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
