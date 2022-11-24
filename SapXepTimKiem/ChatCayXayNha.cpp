#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1000001], n, k;

bool check(ll res){
    ll sum = 0;
    for(int i = 0;  i < n; i++){
        sum += (a[i] - res);
    }
    return sum >= k;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    ll l = 0;
    ll r = *max_element(a,a+n);
    ll res;
    while(l <= r){
        ll m = (l + r) / 2;
        if(check(m)){
            res = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    cout << res << endl;
    return 0;
}