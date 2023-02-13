#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    ll a[n];
    ll sum = 0;
    for(ll &x : a) cin >> x;
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        sum += a[i] *(i);
        sum %= (int)(1e9 + 7);
    }
    cout << sum << endl;
    return 0;
}