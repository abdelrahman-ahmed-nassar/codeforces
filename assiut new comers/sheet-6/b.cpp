  // B. Prime checking

  #include <iostream>
  #include <bits/stdc++.h>
  using namespace std;

  void solve()
  {
    long long n;
    cin >> n;
    if (n <= 1) {
      cout<<"NO";
      return;
    }

    if (n == 2)
    {
      cout<<"YES";
      return;
    }

    if (n % 2 == 0)
    {
      cout << "NO";
      return;
    }

    // for (int i = 3; i * i <= n; i++)
    for (int i = 3; i <= sqrt(n); i++)
    {
      if (n % i == 0)
      {
        cout << "NO";
        return;
      }
    }

    cout << "YES";
    return;
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
