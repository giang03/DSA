#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b; cin >> a >> b;
    ll x = ceil(sqrt(a));
    ll y = floor(sqrt(b));
    cout << y - x + 1 << endl;
    return 0;
}