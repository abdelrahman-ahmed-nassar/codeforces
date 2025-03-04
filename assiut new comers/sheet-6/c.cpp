//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long sumEven(long long n)
{
  long long res = (n * (n + 1));
  return res;
}

long long sumOdd(long long n)
{
  long long res = (n + 1) / 2;
  long long finalRes = res * res;
  return finalRes;
}

void solve()
{
  int a, b;
  cin >> a >> b;

  int mn = min(a, b);
  int mx = max(a, b);

  long long sumMin = (mn) * (mn + 1) / 2;
  long long sumMax = (mx) * (mx + 1) / 2;

  long long sumAll = sumMax - sumMin + mn;
  long long sumE, sumO;
  if (a == b)
  {
    sumAll = a;
    if (a % 2 == 0)
    {
      sumE = a;
      sumO = 0;
    }
    else
    {
      sumE = 0;
      sumO = a;
    }
  }

  // even
  if (mn % 2 == 0)
  {
    sumE = sumEven(mx) - sumEven(mn) + mn;
    sumO = sumOdd(mx) - sumOdd(mn);
  }
  // odd
  if (mn % 2 != 0)
  {
    sumE = sumEven(mx) - sumEven(mn);
    sumO = sumOdd(mx) - sumOdd(mn) + mn;
  }

  cout << sumAll << endl
       << sumE << endl
       << sumO;
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

/*

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long sumEven(long long n)
{
  long long res = (n * (n + 1));
  return res;
}

long long sumOdd(long long n)
{
  long long res = (n + 1) / 2;
  long long finalRes = res * res;
  return finalRes;
}

void solve()
{
  int a, b;
  cin >> a >> b;

  int mn = min(a, b);
  int mx = max(a, b);

  long long evenRes = sumEven(mx / 2) - sumEven((mn - 1) / 2);
  long long oddRes = sumOdd(mx) - sumOdd(mn - 1);

  cout << evenRes + oddRes << endl;
  cout << evenRes << endl;
  cout << oddRes << endl;
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






*/