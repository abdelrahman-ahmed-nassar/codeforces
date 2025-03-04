// K. Combination and Permutation

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll factorial(int n)
{
  if (n == 0 || n == 1) {
    return 1;
  }
  ll sum = 1;
  for (int j = 2; j <= n; j++)
  {
    sum *= j;
  }
  return sum;
}

void solve()
{
  int a, b;
  cin >> a >> b;

  cout << factorial(a) / (factorial(a - b) * factorial(b)) << ' ';
  cout << factorial(a) / factorial(a - b);
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
K. Combination and Permutation
time limit per test1 second
memory limit per test256 megabytes
Given two numbers A
 and B
. Print NCR and NPR of A
 and B
.

Note:

NCR is the Combination.
NPR is the Permutation.
Input
Only one line contains two numbers A
 and B
 (0≤A,B≤19)
.

It's guaranteed that A≥B
 .

Output
Print NCR and NPR of A
 and B
 separated by a space.

Examples
InputCopy
5 3
OutputCopy
10 60
InputCopy
6 2
OutputCopy
15 30
Note
For more information visit:

https://www.mathsisfun.com/combinatorics/combinations-permutations.html.



*/