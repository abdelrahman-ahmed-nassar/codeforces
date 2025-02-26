// R. Permutation with arrays

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fa[10000000 + 1];
int fb[10000000 + 1];
void solve()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;
    fa[k]++;
  }

  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;
    fb[k]++;
  }
  bool is = true;
  for (int i = 0; i < 10000000 + 1; i++)
  {
    if (fa[i] != fb[i])
    {
      is = false;
      break;
    }
  }

  cout << (is ? "yes" : "no");
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
