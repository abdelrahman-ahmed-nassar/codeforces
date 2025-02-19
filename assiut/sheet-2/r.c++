  #include <bits/stdc++.h>
  #include <iostream>

  using namespace std;

  int main()
  {
    int n, k;

    while (true){
      cin>>n>>k;

      if (!(n > 0 && k > 0)) {
        break;
      }

      int mn = min(n, k);
      int mx = max(n, k);

      for (int i = mn; i <= mx; i++)
      {
        cout << i << " ";
      }
      cout << "sum =" << (mx * (mx + 1) / 2) - ((mn - 1) * (mn) / 2) << endl;
    } 


    return 0;
  }