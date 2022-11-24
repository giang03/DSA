#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n ,x ,y;

bool check(ll res){
    res -= min(x,y);
    return (res/x + res/y) >= n - 1;
}

int main(){
    cin >> n >> x >> y;
    ll l = 0;
    ll r = 1ll*x*n;
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