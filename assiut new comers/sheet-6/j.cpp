// J. Prime Factors
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve()
{
  int n;
  cin >> n;
  int i = 1;
  int c = 0;

  string s = "";

  while (n != 1)
  {
    ++i;

    c = 0;
    while (n % i == 0)
    {
      n /= i;
      c++;
    }

    // print
    if (c != 0)
    {
      s += '(' + to_string(i) + '^' + to_string(c) + ')' + '*';
    }
  }

  cout << s.substr(0, s.length() - 1);
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

J. Prime Factors
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the prime factors of N in the following form: (P1)x * (P2)y * (P3)z * ...

Note: P1, P2, ..., Pi are prime factors of N.

For example:

If N = 1260: 1260 = 2*2*3*3*5*7 then print (2^2)*(3^2)*(5^1)*(7^1).

Input
Only one line contains a number N (2 ≤ N ≤ 2 * 107).

Output
Print N in this form (P1)x * (P2)y * (P3)z * ...

Examples
InputCopy
1260
OutputCopy
(2^2)*(3^2)*(5^1)*(7^1)
InputCopy
1677060
OutputCopy
(2^2)*(3^2)*(5^1)*(7^1)*(11^3)
InputCopy
1299721
OutputCopy
(1299721^1)


*/