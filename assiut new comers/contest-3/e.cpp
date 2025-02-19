// Alternating Array
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  int arr[n];
  int tempArr[n];

  int x;

  for (int i = 0; i < n; i++)
  {
    cin >>x;
    arr[i]=x;
    tempArr[i]=x;
  }

  int cP = 0;
  for (int i = 1; i < n; i++)
  {
    int el = arr[i];
    int prevEl = arr[i - 1];

    if ((el > 0 && prevEl > 0) || (el < 0 && prevEl < 0))
    {
      arr[i] = -1 * el;
      cP++;
    }
  }

  tempArr[0] = tempArr[0] * -1;

  int cN = 0;
  for (int i = 1; i < n; i++)
  {
    int el = tempArr[i];
    int prevEl = tempArr[i - 1];

    if ((el > 0 && prevEl > 0) || (el < 0 && prevEl < 0))
    {
      tempArr[i] = -1 * el;
      cN++;
    }
  }

  cout<<min(cP,(cN + 1));

  return 0;
}