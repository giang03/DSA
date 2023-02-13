#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];

void DFS(int u){
    visited[u] = true;
    for(int x : v[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

int main(){
    int n,m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int tplt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            DFS(i);
        }
    }
    if(tplt == 1 && m == n - 1) {
        cout << 1;
    }
    else cout << 0;
    return 0;
}   