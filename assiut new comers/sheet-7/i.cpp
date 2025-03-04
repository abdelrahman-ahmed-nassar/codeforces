#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int count_vowels(string s, int c)
{
  if (s.size() == 0)
  {
    return c;
  }
  string ch = s.substr(0, 1);

  if (ch == "a" || ch == "e" || ch == "i" || ch == "u" || ch == "o" || ch == "A" || ch == "E" || ch == "I" || ch == "U" || ch == "O")
  {
    c++;
  }
  return count_vowels(s.substr(1), c);
}

void solve()
{
  string s;
  getline(cin, s);

  int n = count_vowels(s, 0);
  cout << n;
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

/*I. Count Vowels
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
InputCopy
Data Structure Lab
OutputCopy
6

*/