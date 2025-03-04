
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

double distance(double x1, double y1, double x2, double y2)
{
  return sqrt( pow(x1 - x2, 2) + pow(y2 - y1, 2));
}

void solve()
{
  double x1, x2, y1, y2, x3, y3, x4, y4;

  cin >> x1 >> y1;
  cin >> x2 >> y2;

  cin >> x3 >> y3;
  cin >> x4 >> y4;

  double center1X = (x1 + x2) / 2;
  double center1Y = (y1 + y2) / 2;

  double center2X = (x3 + x4) / 2;
  double center2Y = (y3 + y4) / 2;

  double r1 = distance(x1, y1, x2, y2) / 2;
  double r2 = distance(x3, y3, x4, y4) / 2;

  double line = distance(center1X, center1Y, center2X, center2Y);

  if (line > r1+r2 )
  {
    cout << "NO";
  }
  else
  {
    cout << "YES";
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

W. Circles
time limit per test1 second
memory limit per test256 megabytes
Given four cartesian points (X1
, Y1
), (X2
, Y2
), (X3
, Y3
) and (X4
, Y4
) that donate two endpoints of a diameter of circle A
 and circle B
 respectively. Determine whether these two circles intersect or not.

Input
First line contains four numbers (X1
, Y1
) and (X2
, Y2
) (−105≤X1,Y1,X2,Y2≤105)
 two endpoints of a diameter of the circle A
.

Second line contains four numbers (X3
, Y3
) and (X4
, Y4
) (−105≤X3,Y3,X4,Y4≤105)
 two endpoints of a diameter of the circle B
.

Output
Print "YES" if circle A
 intersect circle B
 otherwise, print "NO".

Examples
InputCopy
1 2 1 -2
4 3 1 0
OutputCopy
YES
InputCopy
0 0 6 0
-8 7 -12 2
OutputCopy
NO

*/