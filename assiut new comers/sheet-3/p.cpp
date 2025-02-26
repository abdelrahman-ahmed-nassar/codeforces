// P. Minimize Number

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  bool all_even = true;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;

    if (k % 2 != 0)
    {
      cout << 0;
      return;
    }
    arr[i] = k;
  }

  int c = 0;

  while (all_even)
  {

    for (int i = 0; i < n; i++)
    {
      if ((arr[i] / 2) % 2 != 0)
      {
        all_even = false;
      }
      arr[i] /= 2;
    }
    c++;
  }
  cout<<c;
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
