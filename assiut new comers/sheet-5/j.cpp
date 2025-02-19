// Average
#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  double sum = 0;
  for (int i = 0; i < n; i++)
  {
    double x;
    cin >> x;
    sum += x;
  }

  double y = sum / n;
  
  // printf("%.6f", y);

  cout << fixed << setprecision(6) << y;
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
