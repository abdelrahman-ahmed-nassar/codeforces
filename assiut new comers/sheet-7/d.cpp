#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print_digits(string s)
{
  if (s.length() < 1)
  {
    cout << s<<endl;
    return;
  }

  cout << s.substr(0, 1) << " ";
  s = s.substr(1);
  print_digits(s);
}

void solve()
{
  int n;
  cin >> n;
  print_digits(to_string(n));
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout);

#endif
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  int T = 1;
  cin >> T;

  while (T--)
  {
    solve();
  }
}

/*D. Print Digits using Recursion
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).

Output
For each test case print a single line contains the digits of the number separated by space.

Example
InputCopy
3
121
39
123456
OutputCopy
1 2 1
3 9
1 2 3 4 5 6 */