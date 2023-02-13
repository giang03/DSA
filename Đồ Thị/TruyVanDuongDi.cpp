#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,m;
int d[1005][1005];

void inp(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == j) d[i][j] = 0;
            else d[i][j] = 1e9;
        }
    }
    for(int i = 1; i <= m; i++){
        int x,y,w; cin >> x >> y >> w;
        d[x][y] = d[y][x] = w;
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
            }
        }
    }
    int q; cin >> q;
    while(q--){
        int x,y; cin >> x >> y;
        cout << d[x][y] << endl;
    }
}

int main(){
    inp();
    return 0;
}