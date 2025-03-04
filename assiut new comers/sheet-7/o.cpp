#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int fibonacci(int n)
{
  if (n == 1)
  {
    return 0;
  }
  if (n == 2)
  {
    return 1;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
  // 1 2 3 4 5 6 7 8
  // 0 1 1 2 3 5 8 13 21 34
}

void solve()
{
  int n;
  cin >> n;
  cout << fibonacci(n);
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

/*O. Fibonacci
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the value of the Nth Fibonacci number.


Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 30).

Output
Print the value of the Nth Fibonacci number.

Example
InputCopy
5
OutputCopy
3
Note
For more information visit Fibonacci: https://www.mathsisfun.com/numbers/fibonacci-sequence.html.


*/