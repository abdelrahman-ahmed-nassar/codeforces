#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  string s;

  getline(cin, s);

  for (int i = 0; i < s.length(); i++)
  {
    if(s[i] == '\\') {
      break;
    }else {
      cout<<s[i];
    }
  }
  

  return 0;
}