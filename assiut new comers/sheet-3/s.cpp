// S. Search In Matrix
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  int arr[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  int x;
  cin >> x;

  bool exist = false;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == x)
      {
        exist = true;
        break;
      }
    }
  }

  cout << (exist ? "will not take number" : "will take number");
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
