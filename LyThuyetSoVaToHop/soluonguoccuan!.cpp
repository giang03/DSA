#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

int bacp(int n, int p){
    int tmp = 0;
    for(int i = p; i <= n; i *= p){
        tmp += n/i;
    }
    return tmp;
}
int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    } 
    return n>1;
}

int main(){
    int n; cin >> n;
    ll tmp = 1;
    for(int i = 2; i <= n; i++){
        if(nt(i)){
            tmp *= (bacp(n,i) + 1);
            tmp %= Mod;
        }
    }
    cout << tmp << endl;
    return 0;
}