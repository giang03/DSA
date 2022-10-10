#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,p; cin >> n >> p;
    ll cnt = 0;
    for(ll i = p; i <= n; i *= p){
        cnt += n/i;
    }
    cout << cnt << endl;
    return 0;
}