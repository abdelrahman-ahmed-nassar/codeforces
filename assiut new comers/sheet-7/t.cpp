#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

long double factorial(long double n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  long double sum = 1;
  for (int j = 2; j <= n; j++)
  {
    sum *= j;
  }
  return sum;
}

void solve()
{
  long double a, b;
  cin >> a >> b;

  cout << factorial(a) / (factorial(a - b) * factorial(b));
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

/*T. Combination
time limit per test2 seconds
memory limit per test64 megabytes
Given two numbers N and R. Print the NCR value.

Note: Solve this problem using recursion.

Input
Only one line contains two numbers N and R (0 ≤ N, R ≤ 30).

Output
Print the NCR value.

Examples
InputCopy
4 2
OutputCopy
6
InputCopy
3 3
OutputCopy
1
Note
For more information visit combination:

https://www.mathsisfun.com/combinatorics/combinations-permutations.html


*/