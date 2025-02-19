#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  char s;
  cin >> s;

  int n;
  cin >> n;

  int x;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    for (int i = 0; i < x; i++)
    {
      cout << s;
    }
    cout << endl;
  }

  return 0;
}