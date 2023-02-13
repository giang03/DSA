#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <vector<int>> v(1005);
bool visited[1005];

void DFS(int s){
    visited[s] = true;
    cout << s << ' ';
    for(int i = 0; i < v[s].size(); i++){
        if(!visited[v[s][i]]){
            DFS(v[s][i]);
        }
    }
}

int main(){
    int n,m,s; cin >> n >> m >> s;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
    }
    DFS(s);
    return 0;
}