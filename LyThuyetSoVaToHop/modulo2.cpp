#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll modulo(int a){
    int m = 1000000007;
    ll xa = 1, xm = 0;
    ll q, r, xr;
    while(m){
        q = a/m;
        xr = xa - q * xm;
        xa = xm;
        xm = xr;
        r = a % m;
        a = m;
        m = r;
    }
    if(xa < 0) xa = 1000000007 + xa;
    return xa;
}

int main(){
    int a; cin >> a;
    cout << modulo(a) << endl;
    return 0;
}