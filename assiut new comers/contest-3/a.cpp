// Square or rectangle


#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;

  int w,h;

  for (int i = 0; i < t; i++)
  {
    cin >>w>> h;

    if(w == h) {
      cout<<"Square"<<endl;
    }else {
      cout<<"Rectangle"<<endl;
    }
  }
  
  return 0;
}