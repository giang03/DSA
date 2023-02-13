#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];
bool f[1005][1005];

void DFS(int s, int i){
    visited[s] = true;
    f[s][i] = true;
    for(int x : v[s]){
        if(!visited[x]){
            DFS(x,i);
        }
    }
}

int main(){
    int n,m; cin >> n >> m ;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
    }
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        DFS(i,i);
    }
    int q; cin >> q;
    while(q--){
        int s,t; cin >> s >> t;
        if(f[s][t]) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}