#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    bool isCorrect = false;
    int n;


    while (!isCorrect)
    {
      cin>>n;
      if(n != 1999) {
        cout<<"Wrong"<<endl;
      }else {
        cout<<"Correct"<<endl;
        isCorrect = true;
      }
    }
    

    return 0;
}