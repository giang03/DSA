#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b){
    return a/__gcd(a,b)*b;
}

int main(){
    ll x,y,z; cin >> x >> y >> z;
    ll n; cin >> n;
    ll a = pow(10,n-1);
    ll b = pow(10,n);
    ll c = lcm(x,lcm(y,z));
    if(c >= b){
        cout << -1 << endl;
    }
    else {
        if((a/c + 1)* c >= b){
            cout << -1 << endl;
        }
        else 
            cout << (a/c + 1)* c << endl;
    }
    return 0;
}