#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m; cin >> n >> m;
    int a[n],b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0;
    ll ans = 0;
    ll cnt = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            cnt++;
            j++;
            ans++;
        }
        else {
            if(a[i] > b[j]) j++;
            else {
                i++;
                if(a[i] == a[i-1]){
                    ans += cnt;
                }
                else cnt = 0;
            }
        }
    }
    while(i < n){
        i++;
        if(a[i] == a[i-1]){
            ans += cnt;
        }
        else cnt = 0;
    }
    cout << ans << endl;
    return 0;
}