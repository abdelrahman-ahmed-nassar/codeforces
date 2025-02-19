#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, a;
  cin >> n >> a;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr[(i + a) % n] = x;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
    if (i < n -1) cout<<" ";
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
