#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s = to_string(n);
  int len = s.size();
  int arr[len];

  int temp;

  for (int i = 0; i < len; i++)
  {
    temp = n % 10;

    arr[i] = abs(temp - 9);

    n /= 10;
  }

  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
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
