// String Functions
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, Q;
    cin >> N >> Q;
    string s;
    cin >> s;

    
    
    while(Q--){
        string op;
        cin >> op;
        if(op == "pop_back"){
            // Although guaranteed non-empty for these queries,
            // we check to be extra safe.
            if(!s.empty()) 
                s.pop_back();
        } 
        else if(op == "front"){
            cout << s.front() << "\n";
        } 
        else if(op == "back"){
            cout << s.back() << "\n";
        } 
        else if(op == "sort"){
            int l, r;
            cin >> l >> r;
            // If indices are given in reverse order, swap them.
            if(l > r) swap(l, r);
            // Convert from 1-indexed to 0-indexed.
            sort(s.begin() + l - 1, s.begin() + r);
        } 
        else if(op == "reverse"){
            int l, r;
            cin >> l >> r;
            if(l > r) swap(l, r);
            // Reverse the substring from l to r (1-indexed)
            reverse(s.begin() + l - 1, s.begin() + r);
        } 
        else if(op == "print"){
            int pos;
            cin >> pos;
            cout << s[pos - 1] << "\n";
        } 
        else if(op == "substr"){
            int l, r;
            cin >> l >> r;
            if(l > r) swap(l, r);
            cout << s.substr(l - 1, r - l + 1) << "\n";
        } 
        else if(op == "push_back"){
            char c;
            cin >> c;
            s.push_back(c);
        }
    }
    
    return 0;
}
