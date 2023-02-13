#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    map <char,int> ma;
    for(int i = 0; i < s.size(); i++){
        ma[s[i]]++;
    }
    for(auto x : ma){
        if(x.second >= (int)(s.size() + 1) / 2 + 1){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}