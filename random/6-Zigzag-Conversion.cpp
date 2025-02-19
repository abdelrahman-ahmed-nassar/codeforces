#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  string s;
  cin >> s >> n;

  for (int r = 0; r < n; r++)
  {
    for (int j = r; j < s.size(); j += 2 * (n - 1))
    {
      cout << s[j] << " ";
      if (r > 0 && r < n - 1 && j + 2 * (n - 1) - 2 * r < s.size())
      {
        cout << s[j + 2 * (n - 1) - 2 * r];
      }
    }
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
