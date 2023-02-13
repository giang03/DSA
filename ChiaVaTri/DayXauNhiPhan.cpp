#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll f[100];

void solve(ll k, ll n){
    if(n == 1) {
        cout << '0';
        return;
    }
    if(n == 2) {
        cout << '1';
        return;
    }
    if(k > f[n-2]){
        solve(k - f[n-2],n - 1);
    }
    else solve(k, n - 2);
}

int main(){
    ll n,k; cin >> n >> k;
    f[1] = 1; f[2] = 1;
    for(int i = 3; i < 93; i++){
        f[i] = f[i-1] + f[i-2];
    }
    solve(k,n);
    return 0;
}