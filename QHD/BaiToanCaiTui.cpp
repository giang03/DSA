#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int w[1002],c[1002];
ll f[1005][1005];

int main(){
    int n,v; cin >> n >> v;
    for(int i = 1; i <= n; i++) cin >> w[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= v; j++){
            f[i][j] = f[i-1][j];
            if(j >= w[i]){
                f[i][j] = max(f[i][j],f[i-1][j - w[i]] + c[i]);
            }
        }
    }
    cout << f[n][v];
    return 0;
}