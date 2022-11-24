#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string s; cin >> s;
    set <char> se;
    for(int i = 0; i < s.size(); i++){
        se.insert(s[i]);
    }
    int cnt = 0, res = INT_MAX;
    map <char,int> ma;
    for(int i = 0; i < s.size(); i++){
        ma[s[i]]++;
        cnt++;
        while(ma.size() == se.size()){
            res = min(res,cnt);
            ma[s[i-cnt+1]]--;
            if(ma[s[i-cnt+1]] == 0){
                ma.erase(s[i-cnt+1]);
            }
            cnt--;
        }
    }
    cout << res << endl;
    return 0;
}