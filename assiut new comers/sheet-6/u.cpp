#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

long double distance(long double x1, long double y1, long double x2, long double y2)
{
  return sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));
}

void solve()
{
  long double x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  long double d1, d2, d3;

  d1 = distance(x1, y1, x2, y2);
  d2 = distance(x2, y2, x3, y3);
  d3 = distance(x3, y3, x1, y1);

  if (d1 + d2 == d3 || d1 + d3 == d2 || d2 + d3 == d1)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
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

/*U. Straight Line
time limit per test1 second
memory limit per test256 megabytes
Given three points on the Cartesian plane. Determine whether a single straight line can pass through these points or not.

Input
First line contains two numbers X1,Y1
 (−105≤X1,Y1≤105)
.

Second line contains two numbers X2,Y2
 (−105≤X2,Y2≤105)
.

Third line contains two numbers X3,Y3
 (−105≤X3,Y3≤105)
.

Output
Print "YES" if a single straight line can pass through the three points otherwise, print "NO".

Examples
InputCopy
1 1
2 2
3 3
OutputCopy
YES
InputCopy
0 1
-4 7
3 3
OutputCopy
NO

*/