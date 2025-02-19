// Max Subsequence
#include <bits/stdc++.h>
#include <iostream>


using namespace std;

int main() {
  int n;
  cin>>n;

  string s;
  cin>>s;

  string temp = "";

  for (int  i = 0; i < n; i++)
  {
    if(s[i] != s[i +1]) {
      temp+=s[i];
    }
  }


  
  cout<<temp.size();

  return 0;
}