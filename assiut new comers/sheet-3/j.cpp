// Lucky Array
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  int offset = 100000;

  int freq[2 * offset + 1] = {0};

  int min = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    freq[x + offset]++;

    if (x < min) {
      min = x;
    }
  }

  int minFreq = freq[min + offset];

  cout<<((minFreq % 2 == 0) ? "Unlucky" : "Lucky");

  return 0;
}