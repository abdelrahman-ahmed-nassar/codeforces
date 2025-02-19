// Max Subarray
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int solution1()
{
  int t;
  cin >> t;

  for (int z = 0; z < t; z++)
  {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int s = 0; s < n; s++)
    {
      for (int j = 0; j < n - s; j++)
      {
        int max = INT_MIN;
        for (int i = 0; i <= s; i++)
        {
          if (arr[j + i] > max)
          {
            max = arr[j + i];
          }
        }
        cout << max << " ";
      }
    }
    cout<<endl;
  }

  return 0;
}

int main() {
  return 0;
}