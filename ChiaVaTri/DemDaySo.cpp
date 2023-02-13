#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll powMod(ll a,ll n){
    ll x = 1;
    while (n){
        if(n % 2 == 1){
            x *= a;
            x %= MOD;
        }
        a *= a;
        n/=2;
        a %= MOD;
    }
    return x;
}

int main(){
    ll n; cin >> n;
    cout << powMod(2,n-1) << endl;
    return 0;
}