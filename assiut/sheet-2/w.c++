#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int lines;
  cin >> lines;

  for (int i = 1; i <= lines; i++)
  {

    for (int w = lines - i; w >= 1; w--)
    {
      cout << " ";
    }
    // use i*2 in for loop
    for (int x = 1; x <= (i * 2) - 1; x++)
    {
      cout << "*";
    }

    cout << endl;
  }

  for (int i = lines; i >= 1; i--)
  {

    for (int w = lines - i; w >= 1; w--)
    {
      cout << " ";
    }
    // use i*2 in for loop
    for (int x = 1; x <= (i * 2) - 1; x++)
    {
      cout << "*";
    }

    cout << endl;
  }
  return 0;
}