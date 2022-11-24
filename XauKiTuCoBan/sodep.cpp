#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(string s){
    for(int i = 1; i < s.size(); i++){
        if(abs(s[i-1] - s[i]) != 1){
            return false;
        }
    }
    return true;
}

int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}