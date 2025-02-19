// Drawing `X'

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int k;
  cin >> k;

  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < k; j++)
    {
      if (i == ((k / 2)) && j == i)
      {
        cout << 'X';
      }
      else if (j == (k - i - 1))
      {
        cout << '/';
      }
      else if (j == i)
      {
        cout << '\\';
      }
      else
      {
        cout << "*";
      }
    }
    cout << endl;
  }

  return 0;
}