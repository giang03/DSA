#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;
const int dx[4] = {0,0,-1,1};
const int dy[4] = {1,-1,0,0};

int n,m,xs,ys,xt,yt;
char a[1005][1005];

bool DFS(int i, int j,int cnt, int pre){
    if(cnt > 3) return 0;
    if(i == xt && j == yt) return 1;
    for(int k = 0; k < 4; k++){
        int x = i + dx[k], y = j + dy[k];
        if(x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == '.'){
            a[x][y] = '*';
            if(k == pre){
                if(DFS(x,y,cnt, k)) return 1;
            }
            else {
                if(DFS(x,y,cnt + 1, k)) return 1;
            }
            a[x][y] = '.';
        }
    }
    return 0;
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] == 'T'){
                xt = i; yt = j;
                a[i][j] = '.';
            }
            else if(a[i][j] == 'S'){
                xs = i; ys = j;
            }
        }
    }
    if(DFS(xs,ys,0,-1)){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}