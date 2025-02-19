#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>

void solve()
{
  /*
  edge cases
  */

  int n;
  cin >> n;

  int arr[n];
  std::vector<long long> freq((int)pow(10, 6) + 1, 0);

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr[i] = x;
    freq[x]++;
  }

  int mn = INT_MAX;
  int mx = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < mn)
    {
      mn = arr[i];
    }

    if (arr[i] > mx)
    {
      mx = arr[i];
    }
  }

  long long c = 0;
  int target = mn + mx;

  for (int i = 0; i < n; i++)
  {
    int j = target - arr[i];

    c += freq[j];

    if (arr[i] == j)
      c--;
  }

  cout << c / 2;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout);

#endif
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  int T = 1;

  while (T--)
  {
    solve();
  }
}
