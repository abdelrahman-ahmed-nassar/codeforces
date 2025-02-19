#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int x;
  string s;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    s = to_string(x);

    for (int j = 0; j < s.length(); j++)
    {
      cout << s[s.length() - 1  - j] << " ";
    }
    cout<<endl;
  }

  return 0;
}