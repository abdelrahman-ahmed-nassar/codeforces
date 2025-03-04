#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

double distance(double x1, double y1, double x2, double y2)
{
  return sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));
}

void solve()
{
  double x1, x2, y1, y2, x3, y3, x4, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  int mnX = min({x1, x2, x3, x4});
  int mxX = max({x1, x2, x3, x4});

  int mnY = min({y1, y2, y3, y4});
  int mxY = max({y1, y2, y3, y4});

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;

    if (x >= mnX && x <= mxX && y >= mnY && y <= mxY)
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
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

/*X. Rectangle
time limit per test1 second
memory limit per test256 megabytes
Given a rectangle represented by four distinct points: (x1,y1),(x2,y2),(x3,y3)
 and (x4,y4)
,With two sides parallel to the Y-axis and the other two parallel to the X-axis and N
 points, for each point check whether it belongs to the rectangle or not.

Input
First line contains x1,y1,x2,y2,x3,y3,x4
 and y4
 , (−105≤x1,y1,x2,y2,x3,y3,x4,y4≤105)
.

Second line contains N
, (1≤N≤10)
.

Next N
 lines will contain one point (xi,yi)
, (−105≤xi,yi≤105)
.

Output
For each N
 lines print "YES" if the ith
 point belongs to the rectangle and "NO" otherwise.

Example
InputCopy
0 0 0 2 2 0 2 2
3
1 1
1 5
0 0
OutputCopy
YES
NO
YES

*/