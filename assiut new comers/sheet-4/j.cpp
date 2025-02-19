// Count Letters
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n = 26;
  int freq[n][2] = {0, 0};

  for (int i = 0; i < n; i++)
  {
    freq[i][0] = 'a' + i;
  }

  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    int idx = (int)s[i] - 'a';
    freq[idx][1]++;
  }

  for (int i = 0; i < n; i++)
  {
    if (freq[i][1] == 0)
      continue;
    cout << (char)freq[i][0] << " : " << freq[i][1] << endl;
  }

  return 0;
}