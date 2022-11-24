#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string s; cin >> s;
    int cnt = 0, res = 0;
    set <char> se;
    for(int i = 0; i < s.size(); i++){
        se.insert(s[i]);
        cnt++;
        while(se.size() != cnt){
            se.erase(s[i - cnt + 1]);
            cnt--;
            se.insert(s[i]);
        }
        res = max(res,cnt);
    }
    cout << res << endl;
    return 0;
}