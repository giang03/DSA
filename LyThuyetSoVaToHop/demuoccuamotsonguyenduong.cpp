#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    ll ans = 1;
    while(t--){
        int p,e; cin >> p >> e;
        ans *= (e + 1);
        ans %= (int)1e9+7;
    }
    cout << ans << endl;
    return 0;
}