#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int arr[100000];
bool is = true;

void palindrome_array(int n, int c)
{
  if (c >= n)
  {
    return;
  }

  if (arr[c] != arr[n - 1 - c])
  {
    is = false;
  }

  palindrome_array(n, c + 1);
}

void solve()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  palindrome_array(n, 0);
  cout << (is ? "YES" : "NO");
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

/*R. Palindrome Array
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

NOTE: Solve it using recursion.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (1 ≤ Ai ≤ 109).

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
InputCopy
5
1 3 2 3 1
OutputCopy
YES
InputCopy
4
1 2 3 4
OutputCopy
NO

*/