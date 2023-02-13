#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


int main(){
    int n; cin >> n;
    ll a[n];
    ll sum[n],res = 0;
    for(ll &x : a) cin >> x;
    sum[0] = a[0]; sum[1] = max(a[0],a[1]);
    res = max(sum[0],sum[1]);
    for(int i = 2; i < n; i++){
        sum[i] = max(sum[i-1],a[i]+ sum[i-2]);
        res = max(res,sum[i]);
    }
    cout << res << endl;
    return 0;
}