#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >>t;

  int a, b;
  long long mn, mx;



  for (int i = 0; i < t; i++)
  {
    cin>>a>>b;
    mn = min(a,b) - 1;
    mx = max(a,b);
    cout<<( mx * (mx + 1) / 2) - (mn * (mn + 1) /2 ) <<endl;
  }
  

  return 0;
}