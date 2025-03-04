// F. Multiplication of Matrices

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  int rA, cA, rB, cB;
  cin >> rA >> cA;

  int a[rA][cA];

  for (int r = 0; r < rA; r++)
  {
    for (int c = 0; c < cA; c++)
    {
      cin >> a[r][c];
    }
  }

  cin >> rB >> cB;
  int b[rB][cB];

  for (int r = 0; r < rB; r++)
  {
    for (int c = 0; c < cB; c++)
    {
      cin >> b[r][c];
    }
  }
  // Ca = Rb
  for (int r = 0; r < rA; r++)
  {
    for (int c = 0; c < cB; c++)
    {
      int temp = 0;
      for (int i = 0; i < rB; i++)
      {
        temp += a[r][i] * b[i][c];
      }
      cout << temp << " ";
    }
    cout << endl;
  }
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

F. Multiplication of Matrices
time limit per test1 second
memory limit per test256 megabytes
Given two matrices A and B. Print their Multiplication.

Input
First line contains two numbers RA and CA (1 ≤ RA, CA ≤ 100) number of rows and number of columns respectively of Matrix A.

Next RA lines will contain CA numbers ( - 100 ≤ Ai, j ≤ 100) Matrix A numbers.

Next line will contain two numbers RB and CB (1 ≤ RB, CB ≤ 100) number of rows and number of columns respectively of Matrix B.

Next RB lines will contain CB numbers ( - 100 ≤ Bi, j ≤ 100) Matrix B numbers.

It's guaranteed that number of columns in the matrix A is equal to number of rows in the matrix B.

Output
Print the Multiplication result.

Example
InputCopy
2 2
1 2
2 1
2 2
3 4
4 3
OutputCopy
11 10
10 11
Note
For more information visit Matrix Multiplication:

https://www.mathsisfun.com/algebra/matrix-multiplying.html
*/