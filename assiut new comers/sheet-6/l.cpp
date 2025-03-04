// L. Pascal Triangle

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  int n;
  cin >> n;

  int arr[n][n] = {};
  arr[0][0] = 1;

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (j == 0)
      {
        arr[i][j] = 1;
        continue;
      }
      arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << arr[i][j];
      if (j < i )
      {
        cout << " ";
      }
    }
    if (i < n - 1)
    {
      cout << endl;
    }
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
L. Pascal Triangle
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print first N
 rows of pascal triangle.

Input
Only one line contains a number N
 (1≤N≤30)
.

Output
Print first N
 rows of pascal triangle.

Examples
InputCopy
3
OutputCopy
1 
1 1 
1 2 1 
InputCopy
4
OutputCopy
1 
1 1 
1 2 1 
1 3 3 1 
Note
For more information visit pascal triangle:

https://www.mathsisfun.com/pascals-triangle.html .
*/