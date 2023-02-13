#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];

int DFS(int u, int leader){
    visited[u] = true;
    if(v[u].size() > v[leader].size()) leader = u;
    else if(v[u].size() == v[leader].size() && u < leader) leader = u;
    for(int x : v[u]){
        if(!visited[x]){
            leader = DFS(x,leader);
        }
    }
    return leader;
}

int main(){
    int n,m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
    }
    vector <int> ans;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ans.push_back(DFS(i,i));
        }
    }
    sort (ans.begin(),ans.end());
    for(int x : ans){
        cout << x << ' ';
    }
    return 0;
}   