// Conversion
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  string s;
cin>>s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == ',') {
      s[i] = ' ';
      continue;
    }

    if (s[i] <= 'Z') {
      s[i] += 32;
    }else {
      s[i] -= 32;
    }
  }
  cout<<s;
  

  return 0;
}