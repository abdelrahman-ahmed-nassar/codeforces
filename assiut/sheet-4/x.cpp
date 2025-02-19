#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string sort_string(string s) {

  int freq[26] = {0};

  for (int i = 0; i < s.size(); ++i)
  {
    freq[s[i] - 'a']++;
  }

  string ans =  "";

  for (int i = 0; i < 26; ++i)
  {
    for (int j = 0; j < freq[i]; ++j)
    {
      ans += (char)('a' + i);
    }
  }
  return ans;

}

int main()
{
  string s;
  cin >> s;

  if (s.size() == 1)
  {
    cout << s<<endl;
    return 0;
  }

  string min = s;

  for (int i = 1; i < s.size(); i++)
  {
    string x = s.substr(0 , i);
    string y = s.substr(i);
    string new_string = sort_string(x) + sort_string(y);

    if (new_string < min) {
      min = new_string;
    }
  }
  
  cout<<min<<endl;

  return 0;
}