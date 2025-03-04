#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print_n(int n, int c)
{
  if (c == 0)
  {
    cout << n << endl;
    return;
  }

  cout << n - c << endl;
  print_n(n, c - 1);
}

void solve()
{
  int n;
  cin >> n;

  print_n(n, n - 1);
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

/*B. Print from 1 to N
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
InputCopy
5
OutputCopy
1
2
3
4
5*/