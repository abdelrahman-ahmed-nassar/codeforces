#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sum_matrix(int a[100][100], int b[100][100], int r, int c, int k)
{
  if (k < 0)
  {
    return;
  }

  for (int i = 0; i < c; i++)
  {
    cout << a[r - k][i] + b[r - k][i] << " ";
  }
  cout << endl;

  return sum_matrix(a, b, r, c, k - 1);
}

void solve()
{
  int r, c;
  cin >> r >> c;

  int a[100][100] = {};
  int b[100][100] = {};

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> b[i][j];
    }
  }

  sum_matrix(a, b, r - 1, c, r - 1);
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

/*N. Sum of a Matrix
time limit per test1 second
memory limit per test256 megabytes
Given two matrices A and B of size R * C. Print the summation of A and B.

Note: Solve this problem using recursion.

Input
First line contains two numbers R and C (1 ≤ R, C ≤ 100). number of rows and number of columns respectively.

Next R lines will contain C numbers ( - 100 ≤ Ai, j ≤ 100) matrix A numbers.

Next R lines will contain C numbers ( - 100 ≤ Bi, j ≤ 100) matrix B numbers.

Output
Print the summation result.

Example
InputCopy
2 3
1 2 3
4 5 6
1 3 5
7 9 11
OutputCopy
2 5 8
11 14 17

*/