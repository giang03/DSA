#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int k; string s; cin >> k >> s;
        map <char,int> ma;
        priority_queue <int> q;
        for(int i = 0; i < s.size(); i++){
            ma[s[i]]++;
        }
        for(auto it : ma){
            q.push(it.second);
        }
        while(k-- && !q.empty()){
            int tmp = q.top(); q.pop();
            tmp--;
            if(tmp != 0)q.push(tmp);
        }
        ll ans = 0;
        while(!q.empty()){
            ans += pow(q.top(),2);
            q.pop();
        }
        cout << ans << endl;
    }
    return 0;
}