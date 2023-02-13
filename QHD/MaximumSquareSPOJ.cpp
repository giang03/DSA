#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n,m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j]){
                if(i && j) a[i][j] = min({a[i-1][j],a[i][j-1],a[i-1][j-1]}) + 1;
                ans = max(ans,a[i][j]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}