// Q. Count Subarrays

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int c = 0;

  // indexes
  for (int i = 0; i < n; i++)
  {
    c++;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] >= arr[j - 1])
        c++;
      else
        break;
    }
  }

  cout << c << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout);

#endif
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  int T;
  cin >> T;

  while (T--)
  {
    solve();
  }
}
