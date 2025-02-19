  #include <bits/stdc++.h>
  #include <iostream>

  using namespace std;

  int main()
  {
    int n, s;
    cin >> s >> n;

    bool isWinning = true;

    int arr[n][2] = {0};

    // input array
    for (int i = 0; i < n; i++)
    {
      int d, b;
      cin >> d >> b;

      arr[i][0] = d;
      arr[i][1] = b;
    }

    for (int i = 0; i < n - 1; i++)
    {
      for (int j = 0; j < n - i - 1; j++)
      {
        if (arr[j][0] > arr[j + 1][0]) {
          swap(arr[j][0], arr[j + 1][0]);
          swap(arr[j][1], arr[j + 1][1]);
        }
      }
    }


    for (int i = 0; i < n; i++)
    {
      if (s > arr[i][0]) {
        s += arr[i][1];
      }else {
        isWinning = false;
        break;
      }
    }



    if (isWinning)
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }

    return 0;
  }