#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int a[505][505];

int main(){
    int n,m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            a[i][j] += max({a[i-1][j],a[i-1][j-1],a[i][j-1]});
        }
    }
    cout << a[n][m]; 
    return 0;
}