#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  double n, result;
  cin >> n;

  result = 0;
  for (int i = 2; i <= n; i++)
  {
    result += log10(i);
  }
  cout << "Number of digits of " << n << "! is " << (int)result + 1 << endl;
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
P. Factorial Digits
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print the number of digits of N!
.

Input
Only one line contains a number N
 (1≤N≤105)
.

Output
Print one line that contains the following respectively:

"Number of digits of " + N
 + "! is " + the number of digits.
Example
InputCopy
5
OutputCopy
Number of digits of 5! is 3
Note
In the first example:

5!
 = 5*4*3*2*1 = 120.

And 120 has 3 digits.



*/