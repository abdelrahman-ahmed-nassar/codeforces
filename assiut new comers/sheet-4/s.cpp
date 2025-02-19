// Max Split
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int ls = 0;
  int rs = 0;

  string ans = "";
  int c = 0;

  string arr[501];
  int idx = 0;

  for (int i = 0; i < s.size(); i++)
  {
    ans+=s[i];
    if (s[i] == 'R')
    {
      rs++;
    }
    else if (s[i] == 'L')
    {
      ls++;
    }
    if (ls > 0 && rs > 0 && ls == rs)
    {
      arr[idx] = ans;
      idx++;
      ans = "";
      c++;
    }
  }

  cout << c << endl;

  // for (int i = 0; i < s.size(); i++)
  // {
  //   ans += s[i];
  //   if (s[i] == 'R')
  //   {
  //     rs++;
  //   }
  //   else if (s[i] == 'L')
  //   {
  //     ls++;
  //   }
  //   if (ls > 0 && rs > 0 && ls == rs)
  //   {
  //     cout << ans << endl;
  //     ans = "";
  //   }
  // }

  for (int i = 0; i < idx; i++)
  {
    cout<<arr[i]<<endl;
  }
  
  return 0;
}