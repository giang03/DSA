#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    map <char,int> ma;
    int val_max = 0, val_min = INT_MAX;
    char kt,kt2;
    for(int i = 0; i < s.size();i++){
        ma[s[i]]++;
        val_max = max(val_max, ma[s[i]]);
    }
    for(auto x : ma){
        val_min = min(val_min, x.second);
    }
    for(auto x : ma){
        if(x.second == val_max){
            kt = x.first;
        }
        if(x.second == val_min)
            kt2 = x.first;
    }
    cout << kt << ' ' << val_max << endl;
    cout << kt2 << ' ' << val_min << endl;
    return 0;
}