// U. Is B a subsequence of A ?

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  int a[n];
  int b[m];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  int pb = 0;

  for (int pa = 0; pa < n; pa++)
  {
    if (a[pa] == b[pb])
    {
      pb++;
    }
  }

  if (pb == m)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
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
