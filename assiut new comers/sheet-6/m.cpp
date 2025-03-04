#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve()
{
  string a,b;
  cin>>a>>b;

  cout<<(a%b==0 ? "YES" : "NO");
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




/*M. Divisible
time limit per test1 second
memory limit per test256 megabytes
Given two numbers N
 and X
. Determine whether N
 is divisible by X
 or not.

Input
Only one line contains two numbers N
 and X
 (0≤N≤1010000,1≤X≤109)
 .

Output
Print "YES" if N
 is divisible by X
 otherwise, print "NO".

Examples
InputCopy
15 3
OutputCopy
YES
InputCopy
10 7
OutputCopy
NO

*/