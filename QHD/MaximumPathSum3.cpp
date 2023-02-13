#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


ll a[101][101];
int main(){
    int n; cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[j][i];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            a[i][j] += max({a[i-1][j-1],a[i-1][j],a[i-1][j+1]});
            ans = max(ans,a[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}