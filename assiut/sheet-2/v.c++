#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int c = 0;

  for (int i = 1; i <= n * 4; i++)
  {

    if (c == 3)
    {
      cout << "PUM" << endl;
      c = 0;
    }
    else
    {
      cout << i << " ";
      c++;
    }
  }

  return 0;
}