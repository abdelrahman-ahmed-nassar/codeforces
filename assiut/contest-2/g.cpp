#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  int arr[100005] = {0};

  for (int j = 0; j < t; j++)
  {

    long long n;
    long long s;
    cin >> n >> s;

    long long sum = 0;
    int c = 0;

    if (s > (n * (n + 1) / 2))
    {
      cout << -1;
    }
    else if (n > s)
    {
      cout << s;
    }
    else
    {

      for (int i = n; i >= 1; i--)
      {
        if (sum + i <= s)
        {
          sum += i;
          arr[c] = i;
          c++;
        }

        if (sum == s)
        {
          break;
        }
      }
    }

    for (int i = 0; i < c; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  return 0;
}