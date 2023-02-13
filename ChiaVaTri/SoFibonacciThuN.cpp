#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

struct MaTrix{
    ll a[2][2];

    MaTrix operator * (MaTrix b){
        MaTrix x;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                x.a[i][j] = 0;
                for(int k = 0; k < 2; k++){
                    x.a[i][j] += a[i][k] * b.a[k][j];
                    x.a[i][j] %= MOD;
                }
            }
        }
        return x;
    }
};

MaTrix binPow(MaTrix a, ll n){
    if(n == 1) return a;
    MaTrix tmp = binPow(a,n/2);
    if(n % 2 == 1)
        return tmp * tmp * a;
    return tmp * tmp;
}


int main(){
    ll n; cin >> n;
    MaTrix a;
    a.a[0][0] = 1;
    a.a[0][1] = 1;
    a.a[1][0] = 1;
    a.a[1][1] = 0;
    MaTrix x = binPow(a,n);
    cout << x.a[0][1] << endl;
    return 0;
}