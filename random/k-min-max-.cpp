  #include <iostream>
  #include <bits/stdc++.h>
  using namespace std;

  void solve()
  {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a <= b && a <= c)
    {
      cout << a << " ";
    }
    else if (b <= a && b <= c)
    {
      cout << b << " ";
    }
    else if (c <= a && c <= b)
    {
      cout << c << " ";
    }

    if (a >= b && a >= c)
    {
      cout << a << " ";
    }
    else if (b >= a && b >= c)
    {
      cout << b << " ";
    }
    else if (c >= a && c >= b)
    {
      cout << c << " ";
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
