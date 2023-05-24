#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

vector<ll>v;

void solve(){
    queue <ll> q;
    q.push(1);
    while(1){
        ll tmp = q.front(); q.pop();
        if(tmp >= pow(2,63)) return;
        v.push_back(tmp);
        q.push(tmp*10);
        q.push(tmp*10+1);
    }   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    int t; cin >> t;
    while(t--){
        int cnt = 0;
        ll n; cin >> n;
        for(ll x : v){
            if(x < n) cnt++;
            else break;
        }
        cout << cnt << endl;
    }
    return 0;
}