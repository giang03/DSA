#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b){
    return a/__gcd(a,b)*b;
}

int main(){
    ll a,b; cin >> a >> b;
    cout << __gcd(a,b) << ' ' << lcm(a,b) << endl;
    return 0;
}