#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll powMod(ll a, ll b, ll m){
    ll res = 1;
    while(b){
        if(b % 2){
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}

ll f[1000005];

int main(){
    int n; cin >> n; 
    int sum = n *(n + 1) / 2;
    f[0] = 1;
    if(sum % 2 != 0){
        cout << 0 << endl;
    }
    else {
        sum /= 2;
        for(int i = 1; i <= n; i++){
            for(int j = sum; j >= i; j--){
                f[j] += f[j - i];
                f[j] %= MOD;
            }
        }
        cout << (f[sum] * powMod(2,MOD - 2, MOD)) % MOD  << endl;
    }
    return 0;
}