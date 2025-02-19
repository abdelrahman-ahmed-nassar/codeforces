// Even Hate Odd
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin>>t;

  for (int i = 0; i < t; i++)
  {
    int n;
    cin>>n;

    int eC=0;
    int oC=0;

    int x;

    for (int i = 0; i < n; i++)
    {
      cin>>x;
      if(x%2==0){
        eC++;
      }else {
        oC++;
      }
    }
    
    int diff = abs(eC - oC);

    if(diff % 2 == 0) {
      cout<<diff/2<<endl;
    }else {
      cout<<-1<<endl;
    }
  }
  

  return 0;
}