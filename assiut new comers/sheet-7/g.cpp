#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
void pyramids(int n, int c)
{

  if (c >= n)
  {
    return;
  }

  double k = n * 2 - 1;

  for (int i = 1; i <= k; i++)
  {
      if (i <= ceil(k / 2) + c && i >= ceil(k / 2) - c)
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

  pyramids(n, c + 1);
}

void solve()
{
  int n;
  cin >> n;

  pyramids(n, 0);
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

/*G. Pyramid
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print a pyramid of height N
.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤103)
.

Output
Print the pyramid in N
 lines.

Examples
InputCopy
1
OutputCopy
*
InputCopy
2
OutputCopy
 *
***
InputCopy
3
OutputCopy
  *
 ***
*****
InputCopy
4
OutputCopy
   *
  ***
 *****
*******
Note
Don't print any extra space after '*'.


*/