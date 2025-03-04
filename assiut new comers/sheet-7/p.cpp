#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  ll n;
  cin >> n;
  cout << (int)log2(n);
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

/*P. Log2
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print ⌊log2(N)⌋
.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤1018)
.

Output
Print the answer required above.

Examples
InputCopy
1
OutputCopy
0
InputCopy
8
OutputCopy
3

*/