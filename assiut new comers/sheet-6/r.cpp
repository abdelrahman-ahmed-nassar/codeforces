#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  printf("%.7f", sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2)));
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

/*R. Distance points
time limit per test1 second
memory limit per test256 megabytes
Given 2 Cartesian points (X1, Y1) and (X2, Y2). Print the distance between the two points.

Input
Only one line contains four numbers X1, Y1, X2 and Y2 (1 ≤ X1, Y1, X2, Y2 ≤ 109).

Output
Print the answer required above.

Examples
InputCopy
5 3 22 11
OutputCopy
18.788294228
InputCopy
2 3 1 1
OutputCopy
2.236067977
Note
Your answer will be considered correct if its absolute or relative error does not exceed 10 - 6.


*/