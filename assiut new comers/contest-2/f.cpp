// Break Number

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  long long temp;

  int max = INT_MIN;

  int c = 0;

  for (int i = 0; i < n; i++)
  {

    cin >> temp;
    c = 0;

    // calc how many devisable

    while(temp % 2 == 0) {
      c++;
      temp/=2;
    }
    

    // compare to min
    if(c > max) {
      max = c;
    }
  }

  cout<<max;

  return 0;
}