#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];
int parent[1005];
bool ok;

void DFS(int s){
    visited[s] = true;
    for(int v : v[s]){
        if(!visited[v]){
            parent[v] = s;
            DFS(v);
        }
        else if(parent[s] != v){
            ok = 1;
            return;
        }
    }
}

int main(){
    int n,m; cin >> n >> m ;
    ok = 0;
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
        if(!visited[i]){
            DFS(i);
        }
    }
    if(ok) cout << 1;
    else cout << 0 << endl;
    return 0;
}