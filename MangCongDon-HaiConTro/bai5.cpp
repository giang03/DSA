#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,q; cin >> n >> q;
    int a[n],d[n];
    for(int &x : a) cin >> x;
    d[0] = a[0];
    for(int i = 1; i < n ; i++){
        d[i] = a[i] - a[i-1];
    }
    while(q--){
        int l,r,k; cin >> l >> r >> k;
        d[l] += k; d[r+1] -= k;
    }
    a[0] = d[0];
    for(int i = 1; i < n; i++){
        a[i] = d[i] + a[i-1];
    }
    for(int x : a) cout << x << ' ';
    return 0;
}