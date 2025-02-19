#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

void solve()
{
  long long n, m;
  cin >> n >> m;

  unordered_map<long long, int> freq;

  long long index = -1; // 5 billion
  freq[index]++;


  for (int i = 0; i < n; i++)
  {
    int k;
    cin>>k;
    freq[k]++;
  }

  for (int i = -m; i <= m; i++)
  {
    if (freq[i] == 0) {
      cout<<i;
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
