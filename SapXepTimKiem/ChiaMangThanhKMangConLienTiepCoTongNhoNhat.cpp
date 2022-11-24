#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1000001], n, k;

bool check(ll res){
    int cnt = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum > res){
            cnt++;
            sum = a[i];
        }
    }
    ++cnt;
    return cnt <= k;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    ll l = *max_element(a,a+n);
    ll r = accumulate(a,a+n,0ll);
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