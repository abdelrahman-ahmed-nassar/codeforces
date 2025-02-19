#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int num;
  cin >> num;

  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += num % 10;
    num /= 10;
  }

  cout << sum<<endl;

  return 0;
}