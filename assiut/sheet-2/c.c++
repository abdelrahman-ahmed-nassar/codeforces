#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int temp;

  int PCounter = 0, ECounter = 0, OCounter = 0, NCounter;

  for (int i = 0; i < n; i++)
  {
    cin >> temp;

    if (temp % 2 == 0)
    {
      ECounter++;
    }
    else
    {
      OCounter++;
    }

    if (temp < 0)
    {
      NCounter++;
    }
    if (temp > 0)
    {
      PCounter++;
    }
  }

  cout << "Even: " << ECounter << endl;

  cout << "Odd: " << OCounter << endl;

  cout << "Positive: " << PCounter << endl;

  cout << "Negative: " << NCounter << endl;

  return 0;
}