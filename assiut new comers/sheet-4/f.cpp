// Way Too Long Words
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  string s;

  for (int i = 0; i < t; i++)
  {
    cin >> s;

    int ln = s.size();

    if (ln <= 10)
    {
      cout << s<<endl;
    }
    else
    {
      cout<<s[0]<<ln - 2<<s[ln-1]<<endl;
    }
  }


  return 0;
}