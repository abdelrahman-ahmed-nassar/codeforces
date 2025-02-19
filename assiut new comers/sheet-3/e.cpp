// Lowest Number
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;

  int min = INT_MAX;
  int minI = 1;

  int temp;


  for (int i = 1; i <= n; i++)
  {
    cin>>temp;
    if (temp < min) {
      min = temp;
      minI = i;
    }
  }
  cout<<min<<" "<<minI;
  return 0;
}