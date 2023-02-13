#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];
int parent[1005];

void BFS(int s){
    queue <int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int i : v[x]){
            if(!visited[i]){
                parent[i] = x;
                q.push(i);  
                visited[i] = true;
            }
        }
    }
}

int main(){
    int n,m,s,t; cin >> n >> m >> s >> t;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
    }
    BFS(s);
    if(visited[t]){
        stack <int> ans;
        while(t != s){
            ans.push(t);
            t = parent[t];
        }
        cout << s << ' ';
        while(!ans.empty()){
            cout << ans.top() << ' ';
            ans.pop();
        }
    }
    else cout << -1 << endl;
    return 0;
}