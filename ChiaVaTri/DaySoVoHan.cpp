#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

struct Matrix{
    ll a[2][2];

    Matrix operator * (Matrix o){
        Matrix x;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                x.a[i][j] = 0;
                for(int k = 0; k < 2; k++){
                    x.a[i][j] += a[i][k] * o.a[k][j];
                    x.a[i][j] %= MOD;
                }
            }
        }
        return x;
    }
};

Matrix binPow(Matrix a, ll n){
    if(n == 1) return a;
    Matrix x = binPow(a,n/2);
    if(n % 2 == 1)
        return x * x * a;
    return x * x;
}

int main(){
    ll n; cin >> n;
    Matrix a;
    a.a[0][0] = 1;
    a.a[0][1] = 1;
    a.a[1][0] = 1;
    a.a[1][1] = 0;
    Matrix x = binPow(a,n);
    cout << x.a[0][1] << endl;
    return 0;
}