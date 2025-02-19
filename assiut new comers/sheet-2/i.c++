// Palindrome
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string s = to_string(n);
  bool is = true;

  string rS = "";

  for (int i = s.length() - 1; i >= 0; i--)
  {
    rS+=s[i];
    if (s[i] != s[(s.length() - 1 - i)])
    {
      is = false;
    }
  }
  cout<<stoi(rS)<<endl;
  cout << (is ? "YES" : "NO");

  return 0;
}