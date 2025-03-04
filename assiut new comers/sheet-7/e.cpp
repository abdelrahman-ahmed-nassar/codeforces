#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

string base_conversion(int n, string s)
{
  if (n < 1)
  {
    return s;
  }

  if (n % 2 == 0)
  {
    s += "0";
  }
  else
  {
    s += "1";
  }

  return base_conversion(n / 2, s);
}

void solve()
{
  int n;
  cin >> n;

  string s = base_conversion(n, "");

  for (int i = s.size() - 1; i >= 0; i--)
  {
    cout << s[i];
  }
  cout<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout);

#endif
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  int T = 1;
  cin >> T;

  while (T--)
  {
    solve();
  }
}

/*E. Base Converssion
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the binary equivalent of N.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 104) number of test cases.

Next T lines will contain a number N (1 ≤ N ≤ 109).

Output
For each test case print a single line contains the answer according to the required above.

Example
InputCopy
2
10
3
OutputCopy
1010
11
Note
To convert decimal number to binary :

A decimal integer can be converted to binary by dividing it by 2.

Take the quotient, and keep dividing it by 2, until you reach zero.

Each time you perform this division, take note of the remainder. Now reverse the remainders list, and you get the number in binary form

Example to convert 29 to binary


for more details visit this https://flaviocopes.com/converting-decimal-to-binary/.


*/