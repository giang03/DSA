#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll modulo(ll a, ll b){
    ll xa = 1, xb = 0;
    while(b){
        ll q = a / b;
        ll xr = xa - q*xb;
        xa = xb;
        xb = xr;
        ll r = a % b;
        a = b;
        b = r;
    }
    return xa;
}

int main(){
    ll a,b; cin >> a >> b;
    if(__gcd(a,b) != 1){
        cout << -1 << endl;
    }
    else {
        ll x = modulo(a,b);
        if(x > 0){
            cout << x << endl;
        }
        else cout << b+x << endl;
    }
    return 0;
}