#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n; 
int a[1005][1005];
int visited[1005][1005];
const int dx[8] = {-1,-2,-2,-1,1,2,2,1};
const int dy[8] = {-2,-1,1,2,2,1,-1,-2};
int dp[1005][1005];

void BFS(int i, int j){
    queue <pair<int,int>> q;
    q.push({i,j});
    visited[i][j] = true;
    while(!q.empty()){
        pair<int,int> x = q.front();
        q.pop();
        for(int k = 0; k < 8; k++){
            int i1 = x.first + dx[k], j1 = x.second + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] && !visited[i1][j1]){
                dp[i1][j1] = dp[x.first][x.second] + 1;
                q.push({i1,j1});
                visited[i1][j1] = true;
            }
        }
    }
}

int main(){
    cin >> n;
    int s,t,u,v; cin >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) 
            cin >> a[i][j];
    }
    BFS(s,t);
    if(visited[u][v]){
        cout << dp[u][v];
    }
    else cout << -1 << endl;
    return 0;
}    