#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve()
{
  
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




/*U. Knapsack
time limit per test2 seconds
memory limit per test256 megabytes
There are N
 items numbered from 1 to N
. The ith
 item has a weight of wi
 and a value of vi
.

You have to choose some items out of the N
 items and carry them home in a knapsack. The capacity of the knapsack is W
 which donate the maximum weight that can be carried inside the knapsack. In other words, W
 means the total summation of all weights of items that can be carried in the knapsack.

Print maximum possible sum of values of items that you can take home.

Note: Solve this problem using recursion.

Input
First line contains two numbers N
 and W
 (1≤N≤20,1≤W≤100)
 number of items and the capacity of the knapsack.

Next N
 lines will contain two numbers wi
 and vi
 (1≤wi≤50,1≤vi≤1000)

Output
Print maximum possible sum of values of items that you can take home.

Examples
InputCopy
3 8
3 30
4 50
5 60
OutputCopy
90
InputCopy
6 15
6 5
5 6
6 4
6 6
3 5
7 2
OutputCopy
17

*/