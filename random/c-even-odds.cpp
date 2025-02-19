#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  long long n, k;
  cin >> n >> k;



  // n even {1 3 2 4} = 2

  if (n % 2 == 0)
  {
    if (k <= n / 2)
    {
      // odd
      cout << (k * 2) - 1;
      return;
    }
    else
    {
      // even
      cout << (k - n / 2) * 2;
      return;
    }
  }
  else   // n odd {1 3 2} = 2
  {
    if (k <= (n + 1) / 2)
    {
      // odd
      cout << (k * 2) - 1;
      return;
    }
    else
    {
      // even
      cout << (k - (n / 2 + 1)) * 2;
      return;
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
