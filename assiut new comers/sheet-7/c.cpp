#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print_n(int n)
{
  if (n == 1)
  {
    cout << n;
    return;
  }
  cout << n << " ";

  print_n(n - 1);
}

void solve()
{
  int n;
  cin >> n;

  print_n(n);
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

/*C. Print from N to 1

time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
InputCopy
4
OutputCopy
4 3 2 1
Note
Make sure don't print any leading or trailing spaces.
*/