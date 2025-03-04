#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void even_i(int arr[], int n)
{
  if (n < 0)
  {
    return;
  }

  if (n % 2 == 0)
  {
    cout << arr[n] << " ";
  }

  even_i(arr, n - 1);
}

void solve()
{
  int n;
  cin >> n;

  int arr[n] = {};
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  even_i(arr, n - 1);
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

/*F. Print Even Indices
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

Note:

Assume array A is 0-based indexing.
Solve this problem using recursion.
Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print numbers in even indices in a reversed order separated by spaces.

Examples
InputCopy
4
1 4 2 7
OutputCopy
2 1
InputCopy
7
1 5 8 2 3 9 11
OutputCopy
11 3 8 1

*/