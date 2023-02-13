#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

struct  MaTrix{
    ll a[15][15];
    int n;

    MaTrix operator* (MaTrix o){
        MaTrix x;
        x.n = n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                x.a[i][j] = 0;
                for(int k = 0; k < n; k++){
                    x.a[i][j] += a[i][k] * o.a[k][j];
                    x.a[i][j] %= MOD;
                }
            }
        }
        return x;
    }
};

MaTrix binPow(MaTrix a, ll n){
    if(n == 1) return a;
    MaTrix x = binPow(a,n/2);
    if(n % 2 == 1)
        return x * x * a;
    return x * x;
}


int main(){
    int n,k; cin >> n >> k;
    MaTrix x;
    x.n = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           cin >> x.a[i][j];
        }
    }
    MaTrix a = binPow(x,k);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += a.a[i][n-1];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}