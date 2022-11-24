#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int cnt[1000000];
int D[1000000];

int main(){
    int n, q; cin >> n >> q;
    int a[n];
    for(int &x : a) cin >> x;
    while(q--){
        int l, r; cin >> l >> r;
        --l; --r;
        D[l]++; D[r + 1]--;
    }
    cnt[0] = D[0];
    for(int i = 1; i < n; ++i){
        cnt[i] = cnt[i - 1] + D[i];
    }
    sort(a, a + n);
    sort(cnt, cnt + n);
    ll ans = 0;
    for(int i = 0; i < n; ++i) {
        ans += 1ll * a[i] * cnt[i];
    }
    cout << ans << endl;
}