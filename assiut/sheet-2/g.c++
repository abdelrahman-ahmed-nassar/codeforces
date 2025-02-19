#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t, n;
  cin>>t;

  long long sum;

  for (int i = 0; i < t; i++)
  {
    cin>>n;
    sum = 1;
    for (int j = 2; j <= n; j++)
    {
      sum *= j;
    }
    cout<<sum<<endl;
  }
  
  return 0;
}