#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <vector<int>> v(1005);
bool visited[1005];

void BFS(int s){
    queue <int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int i = 0; i < v[x].size(); i++){
            if(!visited[v[x][i]]){
                q.push(v[x][i]);
                visited[v[x][i]] = true;
            }
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
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt++;
            BFS(i);
        }
    }
    cout << cnt << endl;
    return 0;
}