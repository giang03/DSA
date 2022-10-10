#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int Mod = (1e9 + 7);

ll powmod(ll a, ll b){
    ll tmp = 1;
    a %= Mod;
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

int main(){
    ll a,b; cin >> a >> b;
    cout << powmod(a,b) << endl;
    return 0;
}