#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(string s){
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])) return 0;
    }
    return 1;
}

int main(){
    string s;
    int cnt = 0;
    while(cin >> s){
        if(check(s)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}