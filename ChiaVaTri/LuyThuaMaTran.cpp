#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

struct MaTrix{
    ll a[15][15];
    int n;
    
    MaTrix operator * (MaTrix o){
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
    MaTrix a;
    a.n = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a.a[i][j];
        }
    }
    MaTrix x = binPow(a,k);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << x.a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}