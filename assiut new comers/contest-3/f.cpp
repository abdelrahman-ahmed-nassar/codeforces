// Front - End
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  bool isR = true;

  int rC = 0, lC = n - 1;

  for (int i = 0; i < n; i++)
  {
    if (isR)
    {
      cout << arr[rC] << " ";
      rC++;
      isR = false;
    }
    else
    {
      cout << arr[lC] << " ";
      lC--;
      isR = true;
    }
  }

  return 0;
}