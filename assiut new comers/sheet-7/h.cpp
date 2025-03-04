#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void pyramids(int n, int c)
{
  if (c <= 0)
  {
    return;
  }

  double k = n * 2 - 1;

  for (int i = 1; i <= k; i++)
  {
    if (i <= ceil(k / 2) + (c - 1) && i >= ceil(k / 2) - (c - 1))
    {
      cout << "*";
    }
    else
    {
      if (i < ceil(k / 2))
      {

        cout << " ";
      }
    }
  }
  cout << endl;

  pyramids(n, c - 1);
}

void solve()
{
  int n;
  cin >> n;

  pyramids(n, n);
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

/*H. Inverted Pyramid
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print an inverted pyramid of height N
.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤103)
.

Output
Print the pyramid in N
 lines.

Don't print any extra space after '*'.

Examples
InputCopy
1
OutputCopy
*
InputCopy
2
OutputCopy
***
 *
InputCopy
3
OutputCopy
*****
 ***
  *
InputCopy
4
OutputCopy
*******
 *****
  ***
   **/