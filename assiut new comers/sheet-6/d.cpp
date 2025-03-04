// D. Xor

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

long long fun(long long a, long long b, long long q)
{
  if (q == 1)
  {
    return a;
  }
  else if (q == 2)
  {
    return b;
  }
  else if (q >= 3)
  {
    return fun(a, b, q - 1) ^ fun(a, b, q - 2);
  }
  return 0;
}

void solve()
{
  long long a, b, q;
  cin >> a >> b >> q;
  cout << fun(a, b, q);
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
