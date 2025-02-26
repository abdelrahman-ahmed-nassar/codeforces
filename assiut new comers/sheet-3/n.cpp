// N. Check Code
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int a, b;
  string s;

  cin >> a >> b >> s;

  int ln = a + b + 1;

  if (s[a] != '-')
  {
    cout << "No";
    return;
  }

  for (int i = 0; i < ln; i++)
  {
    if (i == a)
      continue;
    if (s[i] == '-')
    {
      cout << "No";
      return;
    }
  }

  cout << "Yes";
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
