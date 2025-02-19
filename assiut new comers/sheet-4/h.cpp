// Good or Bad
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  string s;

  for (int z = 0; z < t; z++)
  {
    cin >> s;
    bool isGood = false;
    for (int i = 0; i < s.size() - 2; i++)
    {
      string sub = s.substr(i, 3);
      if (sub == "101" || sub == "010") {
        isGood = true;
      }
    }
    cout << (isGood ? "Good" : "Bad") << endl;
  }

  return 0;
}