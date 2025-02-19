  #include <iostream>
  #include <bits/stdc++.h>
  using namespace std;

  void solve()
  {
    double n;
    cin >> n;

    if (n == 2 || n == 1) {
      cout << "YES";
      return;
    }

    while (n > 2)
    {
      n /= 2;
      if (n == 2)
      {
        cout << "YES";
        return;
      }
    }
    cout << "NO";
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
