#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int MOD = 1e9 + 7;

ll powmod(ll n, ll k){
    ll tmp = 1;
    while(k){
        if(k % 2 == 1){
            tmp *= n;
            tmp %= MOD;
        }
        n *= n;
        n %= MOD;
        k/=2;
    }
    return tmp;
}

int main(){
    ll n,k; cin >> n >> k;
    cout << powmod(n,k) << endl;
    return 0;
}