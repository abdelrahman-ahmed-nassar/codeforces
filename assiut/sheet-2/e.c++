#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int temp;
    cin>>temp;

    int max = temp;

    for (int i = 1; i < n; i++)
    {
      cin>>temp;
      if (temp > max) {
        max = temp;
      }
    }

    cout<<max;
    

    return 0;
}