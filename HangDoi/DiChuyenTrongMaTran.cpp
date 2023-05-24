#include <bits/stdc++.h>
using namespace std;
typedef pair<pair<int,int>,int> iii;
bool flag[1001][1001];
int a[1005][1005];

int solve(int n, int m){
    queue <iii> q;
    memset(flag,0,sizeof(flag));
    q.push({{1,1},0});
    while(!q.empty()){
        iii top = q.front(); q.pop();
        int x = top.first.first, y = top.first.second;
        if(x == n && y == m) return top.second;
        if(y+a[x][y] <= m && !flag[x][y+a[x][y]]){
            q.push({{x,y+a[x][y]},top.second + 1});
            flag[x][y+a[x][y]] = 1;
        }
        if(x+a[x][y] <= n && !flag[x+a[x][y]][y]){
            q.push({{x+a[x][y],y},top.second + 1});
            flag[x+a[x][y]][y] = 1;
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        cout << solve(n,m) << endl;
    }
    return 0;
}