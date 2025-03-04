#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  double x1, x2, y1, y2, x3, y3, x4, y4;

  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;
  cin >> x4 >> y4;

  double slope1, slope2;

  if(x2-x1 == 0 ) {
    slope1 = INT_MAX;
  }else {
    slope1 = (y2 - y1) / (x2 - x1);
  }

  if(x4-x3 == 0 ) {
    slope2 = INT_MAX;
  }else {
    slope2 = (y4 - y3) / (x4 - x3);
  }

  if (slope1 == slope2)
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

/*
V. Two Lines
time limit per test1 second
memory limit per test256 megabytes
Given two lines L1
 and L2
, Determine whether they are parallel or not.

Input
First line contains four numbers (X1,Y1),(X2,Y2)
 (−104≤X1,Y1,X2,Y2≤104)
 which denote start and end point of L1
 respectively.

Second line contains four numbers (X3,Y3),(X4,Y4)
 (−104≤X3,Y3,X4,Y4≤104)
 which denote start and end point of L2
 respectively.

Output
Print "YES" if the two lines are parallel otherwise, print "NO".

Examples
InputCopy
1 1 10 1
1 2 10 2
OutputCopy
YES
InputCopy
10 0 0 10
0 0 10 10
OutputCopy
NO


*/