// Swapping With Matrix
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve()
{
  int n, x, y;
  cin >> n >> x >> y;
  x--;
  y--;

  
  int mn = min({x, y}); // 1
  int mx = max({x, y}); // 2
  
  int diff = mx - mn;

  int arr[n][n];

  int k, i, j;

  for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      cin >> k;

      i = r;
      j = c; 

      if (r == mn)
      {
        i+=diff;
      }

      if (r == mx)
      {
        i-=diff;
      }

      if (c == mn)
      {
        j+=diff;
      }

      if (c == mx)
      {
        j-=diff;
      }

      arr[i][j] = k;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

/////////////////////////////////////////////////////////

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

/*
n * n

2d -> 1d

i = (r * n) + c

1d -> 2d

r = (int)(i / n);

c = i % n;

---- will not make difference


*/