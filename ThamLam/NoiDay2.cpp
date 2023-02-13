#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    priority_queue <ll, vector<ll>> q;
    int n; cin >> n;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        q.push(x);
    } 
    while(q.size() > 1){
        ll a = q.top();
        q.pop();
        ll b = q.top();
        q.pop();
        q.push(a+b);
        ans += a+b;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}

