#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

ll powmod(ll a, ll b){
    ll tmp = 1;
    while(b){
        if(b % 2 == 1){
            tmp *= a;
            tmp %= Mod;
        }
        a *= a;
        a %= Mod;
        b/=2;
    }
    return tmp;
}

ll powmod1(ll a, ll b){
    ll tmp = 1;
    while(b){
        if(b % 2 == 1){
            tmp *= a;
            tmp %= (Mod-1);
        }
        a *= a;
        a %= (Mod-1);
        b/=2;
    }
    return tmp;
}

int main(){
    int n; cin >> n;
    while(n--){
        ll a,b,c; cin >> a >> b >> c;
        cout << powmod(a,powmod1(b,c)) << endl;
    }
    return 0;
}