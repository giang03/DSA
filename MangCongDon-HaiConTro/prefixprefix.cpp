#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[100002], d[100002];
ll q[100002][3];

int main(){
    int n,m,k; cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < 3; j++){
            cin >> q[i][j];
        }
    }
    while(k--){
        int l,r; cin >> l >> r;
        for(int i = l; i <= r; i++){
            d[q[i][0]] += q[i][2];
            d[q[i][1] + 1] -= q[i][2];
        }
    }
    for(int i = 1; i <= n; i++){
        d[i] += d[i-1];
    }
    for(int i = 1; i <= n; i++){
        a[i] += d[i];
        cout << a[i] << ' ';
    }
    return 0;
}