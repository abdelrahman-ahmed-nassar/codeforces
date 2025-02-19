// Distinct Numbers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  int offset = 1000;

  int freq[offset * 2 + 2] = {0};

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    freq[x + offset]++;
  }

  int c = 0;

  int len = sizeof(freq) / sizeof(freq[0]);

  for (int i = 0; i < len; i++)
  {
    if (freq[i] >= 1)
      c++;
  }
  cout << c;
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

// how to get length of array