#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

long double avg = 0;
double arr[101];

void average(ll n, ll c)
{
  if (c >= n)
  {
    return;
  }

  avg += arr[c];

  average(n, c + 1);
}

void solve()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  average(n, 0);
  cout << avg / n;
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

/*S. Array Average
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and an array A
 of N
 numbers. Calculate the average of these numbers.

Note: solve this problem using recursion.

Input
First line contains a number N
 (1≤N≤100)
 number of elements.

Second line contains N
 numbers (−109≤Ai≤109)
.

Output
Print the calculated average, with 6 digits after the decimal point.

Example
InputCopy
5
1 2 3 4 5
OutputCopy
3.000000

*/