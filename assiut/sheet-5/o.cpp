#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
  if (n <= 1)
    return false;

  if (n == 2)
  {
    return true;
  }

  if (n % 2 == 0)
  {
    return false;
  }

  for (int i = 3; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int is_palindrome(int n)
{
  string s = to_string(n);

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != s[s.length() - 1 - i])
    {
      return 0;
    }
  }

  return 1;
}

int max_divisors(int arr[], int n)
{

  int dv_c = 0;
  int mx_dv_c;

  int max = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    dv_c = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[i] % arr[j] == 0)
        dv_c++;
    }
    if (dv_c >= mx_dv_c)
    {
      mx_dv_c = dv_c;
      if (arr[i] > max)
      {
        max = arr[i];
      }
    }
  }

  return max;
}

void solve()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int mn = INT_MAX;
  int mx = INT_MIN;

  int pl_c = 0;
  int pr_c = 0;

  for (int i = 0; i < n; i++)
  {
    pl_c += is_palindrome(arr[i]);
    pr_c += is_prime(arr[i]);

    if (arr[i] > mx)
    {
      mx = arr[i];
    }

    if (arr[i] < mn)
    {
      mn = arr[i];
    }
  }

  int max_dv = max_divisors(arr, n);

  cout << "The maximum number : " << mx << endl;

  cout << "The minimum number : " << mn << endl;

  cout << "The number of prime numbers : " << pr_c << endl;

  cout << "The number of palindrome numbers : " << pl_c << endl;

  cout << "The number that has the maximum number of divisors : " << max_dv;
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
