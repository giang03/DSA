#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool nt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return n > 1;
}

bool check(ll n){
    ll tmp = n;
    for(int i = 1; i <= 33; i++){
        ll hh = pow(2,i) - 1;
        if(nt(hh)){
            hh *= pow(2,i-1);
            if(hh == tmp) return 1;
        }
    }
    return 0;
}

int main(){
    ll n; cin >> n;
    if(check(n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}