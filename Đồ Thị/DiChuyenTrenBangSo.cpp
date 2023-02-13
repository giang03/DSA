#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;
typedef pair<ll,pair<ll,ll>> iii;

int n,m;
int a[1005][1005];
ll dist[1005][1005];
const int dx[4] ={-1,0,0,1};
const int dy[4] ={0,1,-1,0};

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            dist[i][j] = 1e18;
        }
    }
}

void dijkstra(int i, int j){
    priority_queue <iii,vector<iii>,greater<iii>> q;
    dist[i][j] = a[i][j];
    q.push({a[i][j],{i,j}});
    while(!q.empty()){
        iii top = q.top(); q.pop();
        int x = top.second.first, y = top.second.second, w = top.first;
        if(w > dist[x][y]) continue;
        for(int k = 0; k < 4; k++){
            int x1 = x + dx[k], y1 = y + dy[k];
            if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m){
                if(dist[x1][y1] > a[x1][y1] + w){
                    dist[x1][y1] = a[x1][y1] + w;
                    q.push({dist[x1][y1],{x1,y1}});
                }
            }
        }
    }
}

int main(){
    nhap();
    dijkstra(1,1);
    cout << dist[n][m];
    return 0;
}