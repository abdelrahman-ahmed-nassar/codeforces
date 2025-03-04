#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print_recursion(int n)
{
  if (n == 1)
  {
    cout << "I love Recursion" << endl;
    return;
  }
  cout << "I love Recursion" << endl;

  print_recursion(n - 1);
}

void solve()
{
  int n;
  cin >> n;
  print_recursion(n);
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

/*A. Print Recursion
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print "I love Recursion" N times.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1≤N≤100).

Output
Print "I love Recursion" N times.

Example
InputCopy
3
OutputCopy
I love Recursion
I love Recursion
I love Recursion

*/