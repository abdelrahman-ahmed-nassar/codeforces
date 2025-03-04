#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  int n;
  cin >> n;

  int recs[n][2][2];

  for (int i = 0; i < n; i++)
  {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // bottom
    recs[i][0][0] = x1;
    recs[i][0][1] = y1;
    // upper
    recs[i][1][0] = x2;
    recs[i][1][1] = y2;
  }

  int diff[2][2] = {};

  int rec[2][2];

  for (int i = 0; i < n; i++)
  {

    // new bottom
    int mnXLower = min(recs[i][0][0], diff[0][0]);
    int mxXLower = max(recs[i][0][0], diff[0][0]);

    int mnYLower = min(recs[i][0][1], diff[0][1]);
    int mxYLower = max(recs[i][0][1], diff[0][1]);

    diff[0][0] = mxXLower - mnXLower;
    diff[0][1] = mxYLower - mnYLower;

    // new upper
    int mnXUpper = min(recs[i][1][0], diff[1][0]);
    int mxXUpper = max(recs[i][1][0], diff[1][0]);

    int mnYUpper = min(recs[i][1][1], diff[1][1]);
    int mxYUpper = max(recs[i][1][1], diff[1][1]);

    diff[1][0] = mxXUpper - mnXUpper;
    diff[1][1] = mxYUpper - mnYUpper;
  }

  for (int i = 0; i < 2; i++)
  {
    cout << diff[i][0] << " " << diff[i][1] << endl;
  }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < 2; j++)
  //   {
  //     cout << recs[i][j][0] << " " << recs[i][j][1] << endl;
  //   }
  //   cout << "-----------" << endl;
  // }
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

/*Y. Common Area
time limit per test1 second
memory limit per test256 megabytes
Given N
 rectangles, each rectangle will be represented as two points: the lower-left point (x1,y1)
 and the upper right point (x2,y2)
.

Determine the common area shared between all rectangles.

Input
First line contains a number T
 (1≤T≤100)
 number of test cases.

Each test described by a number of rectangles N
 (1≤N≤30)
.

Next N
 lines will contain 4 integers x1
, y1
, x2
 and y2
 (−104≤x1,y1,x2,y2≤104)
.

It's guaranteed that all rectangle sides are parallel to Ox
 or Oy
 axes.

Output
For each test case output "Case #i: a". Where i is a test number, and a is the area shared between all rectangles.

Example
InputCopy
1
4
0 0 10 10
-1 -1 2 2
-10 0 2 100
-10 -10 10 10
OutputCopy
Case #1: 4

*/