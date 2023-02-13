#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];

void BFS(int s){
    queue <int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int k : v[x]){
            if(!visited[k]){
                cout << x << "->" << k << endl;
                q.push(k);
                visited[k] = true;
            }
        }
    }
}

int main(){
    int n,m,s; cin >> n >> m >> s;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(), v[i].end());
    }
    BFS(s);
    return 0;
}   