// Shape2
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int s = 0; s < (n - 1 - i); s++)
    {
      cout << " ";
    }

    for (int x = 0; x < ((i * 2) + 1); x++)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}