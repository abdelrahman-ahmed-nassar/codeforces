// Shift Zeros
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  int arr[n];
  int c = 0;
  int x;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    arr[i] = x;
    if (x == 0)
      c++;
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
      cout << arr[i] << " ";
  }

  for (int i = 0; i < c; i++)
  {
    cout << 0;
    if (i < n - 1)
      cout << " ";
  }
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
