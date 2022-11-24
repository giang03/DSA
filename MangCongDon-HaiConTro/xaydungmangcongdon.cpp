#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    ll a[n];
    ll sum = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sum += x;
        a[i] = sum;
    }
    for(ll x : a) cout << x << ' ';
    return 0;
}