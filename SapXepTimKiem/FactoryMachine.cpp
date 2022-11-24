#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1000001], n, t;

bool check(ll res){
    ll cnt = 0;
    for(int i = 0;  i < n; i++){
        cnt += res/a[i];
    }
    return cnt >= t;
}

int main(){
    cin >> n >> t;
    for(int i = 0; i < n; i++) cin >> a[i];
    ll l = 0;
    ll r = 1ll*(*min_element(a,a+n))*t;
    ll res;
    while(l <= r){
        ll m = (l + r) / 2;
        if(check(m)){
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    cout << res << endl;
    return 0;
}