#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    ll ans = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        pq.push(x);
    }
    while(pq.size() > 1){
        ll a = pq.top(); pq.pop();
        ll b = pq.top(); pq.pop();
        ans += a+b;
        pq.push(a + b);
    }
    ans %= MOD;
    cout << ans  << endl;
    return 0;
}
