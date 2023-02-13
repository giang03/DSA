#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


ll a[101][101];
int main(){
    int n,m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            a[i][j] += max(a[i][j-1],a[i-1][j]);
        }
    }
    cout << a[n][m];
    return 0;
}