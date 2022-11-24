#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a,b,n;

bool check(ll res){
    return ((res/a) * (res/b)) >= n;
}

int main(){
    cin >> a >> b >> n;
    ll l = 0;
    ll r = 1ll*(max(a,b))*n;
    ll res = r;
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