#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <ll> a;

void solutions(ll n){
    ll t = 0;
    ll tmp = 0;
    while(n/2 > 0){
        t++;
        if(t == 1){
            tmp = 2;
        }
        else {
            tmp *= 2;
        }
        a.push_back(tmp);
        n/=2;
    }
}

ll solve(ll k, ll n, ll pos){
    if(k % 2 == 1) return 1;
    if(k == a[pos]) return n % 2;
    if(k < a[pos])
        return solve(k,n/2,pos - 1);
    else return solve(2*a[pos] - k, n/2, pos - 1);
}   

int main(){
    ll n,l,r; cin >> n >> l >> r;
    solutions(n);
    ll ans = 0;
    for(int i = l; i <= r; i++){
        ans += solve(i,n,a.size() - 1);
    }
    cout << ans << endl;
    return 0;
}